use llama_cpp_rs::{
    options::{ModelOptions, PredictOptions},
    LLama,
};
use std::fs;

extern crate walkdir;
use walkdir::WalkDir;
use std::process::Command;
use std::fs::File;
use std::io::{self, Read, Write};


use serde::{Serialize, Deserialize};

#[derive(Serialize, Deserialize, Debug)]
struct TestIndices {
    current_test_create_index: usize,
    current_test_improve_index: usize,
    current_test_run_index: usize,
    #[serde(skip)]
    file_path: String, // This field is not serialized
}

impl TestIndices {
    // Static function to create a new TestIndices instance with all indices set to 0
    fn new(file_path: &str) -> Self {
        TestIndices {
            current_test_create_index: 0,
            current_test_improve_index: 0,
            current_test_run_index: 0,
            file_path: file_path.to_string(),
        }
    }

    fn save_to_file(&self) -> io::Result<()> {
        let serialized = serde_json::to_string(self)?;
        let mut file = File::create(&self.file_path)?;
        file.write_all(serialized.as_bytes())?;
        Ok(())
    }

    fn read_from_file(&mut self) -> io::Result<()> {
        let mut file = File::open(&self.file_path)?;
        let mut contents = String::new();
        file.read_to_string(&mut contents)?;
        let indices: TestIndices = serde_json::from_str(&contents)?;
        self.current_test_create_index = indices.current_test_create_index;
        self.current_test_improve_index = indices.current_test_improve_index;
        self.current_test_run_index = indices.current_test_run_index;
        Ok(())
    }
    fn increment_create_index(&mut self) {
        self.current_test_create_index += 1;
    }

    // Increment the current_test_improve_index by 1
    fn increment_improve_index(&mut self) {
        self.current_test_improve_index += 1;
    }

    // Increment the current_test_run_index by 1
    fn increment_run_index(&mut self) {
        self.current_test_run_index += 1;
    }
} 


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
fn read_current_test_improve_index() -> usize{
    let contents = fs::read_to_string("./current_test_improve_index.txt").expect("should read file");
    let index: usize = contents.parse().unwrap();
    index
}


fn set_current_test_improve_index(index: usize){
    fs::write("./current_test_improve_index.txt", index.to_string()).expect("should write file");
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

fn generate_improve_prompt(compiler_section: &str,feature_to_test: &str, test_to_improve: &str) -> String{
    format!("I want to test different sections of compilers for the C programming language.
    To do this I want to generate specific C programs which cover specific features of the compiler.
    I can then run these programs through different compilers to see if they are supported and compare the outputs for each compiler.
    I want to test the {} feature for the C programming language for the {} section of the compiler.
    Here is my test case: {}
    Improve or fix this test case in order to make it more relevent in testing the feature and fix any syntax or logical issues.
    Do not include any explanation or and writing, just the program to be run. Also do not include any non standard libraries that will need to be added. Finally, make sure the code generated is compatible with the C programming language and not C++ and do not make the test cases compiler specific.
    ",test_to_improve,feature_to_test,compiler_section)
    
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
fn read_test_case(index: usize) -> String{
    let filename = format!("./test_cases/test{}.c",index);
    let contents = fs::read_to_string(filename).expect("should read file");
    contents
}

fn save_test_case(test_count: usize, code: &str){
    let filename = format!("./test_cases/test{}.c",test_count);
    fs::write(filename, code).expect("should write file");
}

fn generate_test_cases(test_indices: &mut TestIndices){
    let generator = LLM::new(
        "./models/deepseek-coder/deepseek-coder-33b-instruct.Q4_K_M.gguf",
        create_model_options(),
        create_predict_options(),
        "./models/deepseek-coder/prompt-template-begin.txt",
        "./models/deepseek-coder/prompt-template-end.txt",
    );
    
    let feature_paths = list_feature_files();
    
    let current_feature_index = test_indices.current_test_create_index;
    let all_features = get_all_features();
    for i in current_feature_index..all_features.len(){
        let feature = &all_features[i];
        let out = generator.generate_output(generate_prompt(&feature.0, &feature.1), create_predict_options());
        println!("Section: {}, Feature: {}", &feature.0, &feature.1);
        println!("{}", &out);
        match extract_code_block(&out) {
            Some(code) => {println!("Extracted code:\n{}", code);
            save_test_case(i, code);
            test_indices.increment_create_index();
            test_indices.save_to_file().unwrap()
        },
            None => println!("Input does not contain a valid code block."),
        }
    }

}

fn improve_test_cases(test_indices: &mut TestIndices){
    let generator = LLM::new(
        "./models/deepseek-coder/deepseek-coder-33b-instruct.Q4_K_M.gguf",
        create_model_options(),
        create_predict_options(),
        "./models/deepseek-coder/prompt-template-begin.txt",
        "./models/deepseek-coder/prompt-template-end.txt",
    );

    let current_test_improve_index = test_indices.current_test_improve_index;
    let all_features = get_all_features();
    for i in current_test_improve_index..all_features.len(){
        let feature = &all_features[i];
        let test_to_improve = read_test_case(i);
        let out = generator.generate_output(generate_improve_prompt(&feature.0, &feature.1,&test_to_improve), create_predict_options());
        println!("Section: {}, Feature: {}", &feature.0, &feature.1);
        println!("{}", &out);
        match extract_code_block(&out) {
            Some(code) => {println!("Extracted code:\n{}", code);
            //save_test_case(i, code);
            test_indices.increment_improve_index();
            test_indices.save_to_file().unwrap()
        },
            None => println!("Input does not contain a valid code block."),
        }
    }

}

fn compile_and_run_program(file_path: &str, compiler_name: &str) -> Result<String, std::io::Error> {
    // Compile the program using the specified compiler
    let compile_output = std::process::Command::new(compiler_name)
        .arg(file_path)
        .output()?;
    
    // Check if the compilation was successful
    if compile_output.status.success() {
        // Run the compiled program and capture its output
        let run_output = std::process::Command::new("./a.out")
            .output()?;
        
        // Convert the output to a string and return it
        let output = String::from_utf8_lossy(&run_output.stdout).to_string();
        Ok(output)
    } else {
        // If compilation failed, return the error message
        let error_message = String::from_utf8_lossy(&compile_output.stderr).to_string();
        Err(std::io::Error::new(std::io::ErrorKind::Other, error_message))
    }
}





fn main() {
    let mut indices = TestIndices::new("test_indices.json");
    indices.read_from_file().unwrap();
    generate_test_cases(&mut indices);

    // generate_test_cases()
    // improve_test_cases()
    // let out = compile_and_run_program("./test_cases/test0.c", "clang");
    // match out {
    //     Ok(output) => println!("Program output:\n{}", output),
    //     Err(error) => println!("Compilation error:\n{}", error),
    // }
    
    

}

