use llama_cpp_rs::{
    options::{ModelOptions, PredictOptions},
    LLama,
};
use std::fs;

extern crate walkdir;
use walkdir::WalkDir;

struct LLM{
    model: LLama,
    model_options: ModelOptions,
    predict_options: PredictOptions,
    prompt_template_begin: String,
    prompt_template_end: String,
}

impl LLM{
    fn new(model_path: &str, model_options: ModelOptions, predict_options: PredictOptions, prompt_begin_path: &str, prompt_end_path: &str) -> Self{
        let model = LLama::new(
            model_path.into(),
            &model_options,
        ).unwrap();

        Self{
            model,
            model_options,
            predict_options,
            prompt_template_begin: fs::read_to_string(prompt_begin_path).expect("should read beginning of prompt"),
            prompt_template_end: fs::read_to_string(prompt_end_path).expect("should read end of prompt"),
            
        }
    }

    fn generate_output(&self, prompt: String, predict_options: PredictOptions) -> String{
        self.model
            .predict(
                format!("{}\n{}\n{}",self.prompt_template_begin,prompt,self.prompt_template_end),
                predict_options,

            ).unwrap()
                                                                        
    }
}

fn create_model_options() -> ModelOptions{
    ModelOptions{
        f16_memory: false,
        m_map: false,
        
        ..Default::default()
    }
}

fn list_feature_files() -> Vec<String> {
    let mut paths = Vec::new();
    for file in WalkDir::new("./features").into_iter().filter_map(|file| file.ok()) {
        if file.metadata().unwrap().is_file() {
            paths.push(file.path().display().to_string());
        }
    }
    paths
}

fn get_features_from_file(file_path: &str) -> Vec<String>{
    let contents = fs::read_to_string(file_path).expect("should read file");
    let features: Vec<String> = contents.split("\n").map(|s| s.to_string()).collect();
    features
}

fn get_all_features() -> Vec<(String,String)>{
    let feature_paths = list_feature_files();
    let mut all_features = Vec::new();
    for feature_path in &feature_paths{
        let features = get_features_from_file(&feature_path);
        let section = remove_extension(&get_filename_from_path(&feature_path));
        for feature in features{
            let tup = (section.clone(),feature);
            all_features.push(tup);
        }
    }
    return all_features;
}

fn get_number_of_features(file_paths: &Vec<String>) -> usize{
    let mut count = 0;
    for file_path in file_paths{
        for feature in get_features_from_file(file_path){
            count += 1;
        }
    }
    count
}

fn get_filename_from_path(path: &str) -> String{
    let split_path: Vec<&str> = path.split("/").collect();
    let filename = split_path[split_path.len()-1].to_string();
    filename
}

fn remove_extension(filename: &str) -> String{
    let split_filename: Vec<&str> = filename.split(".").collect();
    let filename_no_extension = split_filename[0].to_string();
    filename_no_extension
}

fn read_current_feature_index() -> usize{
    let contents = fs::read_to_string("./current_feature_index.txt").expect("should read file");
    let index: usize = contents.parse().unwrap();
    index
}

fn set_current_feature_index(index: usize){
    fs::write("./current_feature_index.txt", index.to_string()).expect("should write file");
}

fn create_predict_options() -> PredictOptions{
    PredictOptions {
        // token_callback: Some(Box::new(|token| {
        //     print!("{}", token.clone());

        //     true
        // })),
        m_map: false,
        threads: 14,
        debug_mode:false,
        tokens: 500,
        prompt_cache_all: false,



        ..Default::default()
    }
}

fn generate_prompt(compiler_section: &str, feature_to_test: &str) -> String{
    format!("I want to test different sections of compilers for the C programming language.
    To do this I want to generate specific C programs which cover specific features of the compiler.
    I can then run these programs through different compilers to see if they are supported and compare the outputs for each compiler.
    I want to test the {} feature for the C programming language for the {} section of the compiler.
    Generate a main function for the C programming language which prints out some specific output based on that feature which I could then use to compare the outputs of.
    Do not include any explanation or and writing, just the program to be run. Also do not include any non standard libraries that will need to be added. Finally, make sure the code generated is compatible with the C programming language and not C++ and do not make the test cases compiler specific.",feature_to_test,compiler_section)
    
}

fn extract_code_block(input: &str) -> Option<&str> {
    // Find the start of the code block, marked by "```c"
    if let Some(start) = input.find("```c") {
        // Calculate the start index of the actual code, skipping "```c\n"
        let code_start = start + 4;
        
        // Find the end of the code block, marked by "```", starting from code_start
        if let Some(end) = input[code_start..].find("```") {
            // Calculate the actual end index of the code within the input
            let code_end = code_start + end;

            // Return the slice of the input that corresponds to the code block
            Some(&input[code_start..code_end])
        } else {
            // If there's no closing "```", return None
            None
        }
    } else {
        // If there's no opening "```c", return None
        None
    }
}

fn save_test_case(test_count: usize, code: &str){
    let filename = format!("./test_cases/test{}.c",test_count);
    fs::write(filename, code).expect("should write file");
}




fn main() {

    let generator = LLM::new(
        "./models/phind-codellama/phind-codellama-34b-v2.Q4_K_M.gguf",
        create_model_options(),
        create_predict_options(),
        "./models/phind-codellama/prompt-template-begin.txt",
        "./models/phind-codellama/prompt-template-end.txt",
    );

    let feature_paths = list_feature_files();
    println!("Number of feautures: {}", get_number_of_features(&feature_paths));
    println!("Number of features: {}", get_all_features().len());

    let current_feature_index = read_current_feature_index();
    let all_features = get_all_features();
    for i in current_feature_index..all_features.len(){
        let feature = &all_features[i];
        let out = generator.generate_output(generate_prompt(&feature.0, &feature.1), create_predict_options());
        println!("Section: {}, Feature: {}", &feature.0, &feature.1);
        println!("{}", &out);
        match extract_code_block(&out) {
            Some(code) => {println!("Extracted code:\n{}", code);
            save_test_case(i, code);
            set_current_feature_index(i+1);},
            None => println!("Input does not contain a valid code block."),
        }
    }



}

