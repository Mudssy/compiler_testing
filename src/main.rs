use llama_cpp_rs::{
    options::{ModelOptions, PredictOptions},
    LLama,
};
use std::fs;
use std::fmt;

extern crate walkdir;
use walkdir::WalkDir;
use std::fs::File;
use std::io::{self, Read, Write};
use std::process::{Command, Output};
use std::time::Duration;

use serde::{Serialize, Deserialize};
use std::collections::HashMap;

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
#[derive(PartialEq)]
enum TestResult{
    Success(String),
    CompileError(String),
    RuntimeError(String),
    Discrepancy(String),
}
// Implementing fmt::Display for CompilerError
impl fmt::Display for CompilerError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            CompilerError::CompilationError(msg) => write!(f, "Compilation Error: {}", msg),
            CompilerError::ExecutionError(msg) => write!(f, "Execution Error: {}", msg),
            CompilerError::IOError(err) => write!(f, "IO Error: {}", err),
        }
    }
}

struct Test{
    file_path: String,
    outputs: HashMap<Compiler, Result<String, CompilerError>>,
    result: Option<TestResult>,
}

impl Test{
    fn new(file_path: &str) -> Self{
        Self{
            file_path: file_path.to_string(),
            outputs: HashMap::new(),
            result: None,
        }
    }
    fn run_test_on_compilers(&mut self, compilers: &Vec<Compiler>, timeout: Duration){
        let mut outputs = HashMap::new();
        for compiler in compilers {
            // Clone the entire compiler struct to use as the key
            let compiler_clone = compiler.clone();
    
            // Compile and run the program, capturing the result
            let output = compiler.compile_and_run_program_with_timeout(&self.file_path, timeout);
    
            // Insert the result into the HashMap with the cloned compiler as the key
            outputs.insert(compiler_clone, output);
        }
        self.outputs = outputs;
    }
    fn analyze_test_results(&mut self){
        let mut all_successful = true;
        let mut all_compile_errors = true;
        let mut all_runtime_errors = true;
        let mut output_set = std::collections::HashSet::new();
    
        for output in self.outputs.values() {
            match output {
                Ok(output) => {
                    all_compile_errors = false;
                    all_runtime_errors = false;
                    output_set.insert(output.trim()); // Trim to ensure whitespace doesn't cause false discrepancies
                },
                Err(CompilerError::CompilationError(_)) => {
                    all_successful = false;
                    all_runtime_errors = false;
                },
                Err(CompilerError::ExecutionError(_)) => {
                    all_successful = false;
                    all_compile_errors = false;
                },
                Err(CompilerError::IOError(_)) => panic!("IO error occurred while running compilers."),
            }
        }
    
        if all_successful && output_set.len() == 1 {
            self.result = Some(TestResult::Success("Test case passed: all compilers produced the same output.".to_string()));
        } else if all_compile_errors {
            self.result = Some(TestResult::CompileError("Test case must have an error: all compilers failed to compile.".to_string()));
        } else if all_runtime_errors {
            self.result = Some(TestResult::RuntimeError("Test case issue: all compilers compiled but failed at runtime.".to_string()));
        } else if output_set.len() > 1 {
            self.result = Some(TestResult::Discrepancy("Discrepancies found: compilers produced differing outputs.".to_string()));
        } else {
            self.result = Some(TestResult::Discrepancy("Mixed results: some compilers succeeded, others failed in various ways.".to_string()));
        }
    }
    
}


#[derive(Debug)]
enum CompilerError {
    CompilationError(String),
    ExecutionError(String),
    IOError(io::Error),
}

impl From<io::Error> for CompilerError {
    fn from(err: io::Error) -> Self {
        CompilerError::IOError(err)
    }
}
#[derive(Clone, Debug, Hash, PartialEq, Eq)]
struct Compiler {
    name: String,
}

impl Compiler {
    fn new(name: &str) -> Self {
        Self {
            name: name.to_string(),
        }
    }
}


impl Compiler {
    fn compile_program(&self, file_path: &str, output_path: &str) -> Result<(), CompilerError> {
        let compile_output = Command::new(&self.name)
            .arg(file_path)
            .arg("-o")
            .arg(output_path)
            .output()?;

        if compile_output.status.success() {
            Ok(())
        } else {
            Err(CompilerError::CompilationError(
                String::from_utf8_lossy(&compile_output.stderr).into_owned(),
            ))
        }
    }

    fn run_program_with_timeout(&self, executable_path: &str, timeout: Duration) -> Result<String, CompilerError> {
        let run_output = Command::new("timeout")
            .arg(format!("{}", timeout.as_secs()))
            .arg(executable_path)
            .output()?;

        if run_output.status.success() {
            Ok(String::from_utf8_lossy(&run_output.stdout).into_owned())
        } else {
            Err(CompilerError::ExecutionError(
                String::from_utf8_lossy(&run_output.stderr).into_owned(),
            ))
        }
    }

    fn compile_and_run_program_with_timeout(&self, file_path: &str, timeout: Duration) -> Result<String, CompilerError> {
        let output_path = "./a.out"; // Consider making this configurable or using a temporary file

        self.compile_program(file_path, output_path)?;

        self.run_program_with_timeout(output_path, timeout)
    }
}



struct LLM{
    model: LLama,
    model_options: ModelOptions,
    predict_options: PredictOptions,
    prompt_template: String,
}

impl LLM{
    fn new(model_path: &str, model_options: ModelOptions, predict_options: PredictOptions, prompt_path: &str) -> Self{
        let model = LLama::new(
            model_path.into(),
            &model_options,
        ).unwrap();

        Self{
            model,
            model_options,
            predict_options,
            prompt_template: fs::read_to_string(prompt_path).expect("should read beginning of prompt"),
            
            
        }
    }

    fn generate_output(&self, prompt: String, predict_options: PredictOptions) -> String{
        //println!("{}",self.prompt_template.replace("{prompt}", &prompt));
        self.model
            .predict(
                self.prompt_template.replace("{prompt}", &prompt),
                predict_options,

            ).unwrap()
                                                                        
    }
    fn predict_options() -> PredictOptions{
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
    fn model_options() -> ModelOptions{
        ModelOptions{
            f16_memory: false,
            m_map: false,
            
            ..Default::default()
        }
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


fn create_test_prompt(compiler_section: &str, feature_to_test: &str) -> String{
    //load prompt from the prompts/create_test.txt file
    let prompt = fs::read_to_string("./prompts/create_test.txt").expect("should read beginning of prompt");
    let prompt = prompt.replace("{section}", compiler_section);
    let prompt = prompt.replace("{feature}", feature_to_test);
    prompt
    
}

fn create_improve_prompt(compiler_section: &str,feature_to_test: &str, test_to_improve: &str) -> String{
    let prompt = fs::read_to_string("./prompts/improve_test.txt").expect("should read beginning of prompt");
    let prompt = prompt.replace("{section}", compiler_section);
    let prompt = prompt.replace("{feature}", feature_to_test);
    let prompt = prompt.replace("{test}", test_to_improve);
    prompt
    
}

fn create_fix_prompt(compiler_section: &str,feature_to_test: &str, test_to_improve: &str) -> String{
    let prompt = fs::read_to_string("./prompts/fix_test.txt").expect("should read beginning of prompt");
    let prompt = prompt.replace("{section}", compiler_section);
    let prompt = prompt.replace("{feature}", feature_to_test);
    let prompt = prompt.replace("{test}", test_to_improve);
    prompt
    
}
fn extract_code_block(input: &str) -> Option<&str> {
    // Convert the input to lowercase for a case-insensitive search and find the start of the code block, marked by "```c"
    let input_lowercase = input.to_lowercase();
    if let Some(start) = input_lowercase.find("```c") {
        // Calculate the start index of the actual code, skipping "```c\n"
        let code_start = start + 4;
        
        // Use the original input to preserve the original case in the extracted code block
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
        LLM::model_options(),
        LLM::predict_options(),
        "./models/deepseek-coder/prompt-template.txt",
        
    );
    
    let feature_paths = list_feature_files();
    
    let current_feature_index = test_indices.current_test_create_index;
    let all_features = get_all_features();
    for i in current_feature_index..all_features.len(){
        let feature = &all_features[i];
        let out = generator.generate_output(create_test_prompt(&feature.0, &feature.1), LLM::predict_options());
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

fn fix_broken_tests(){
    let error_file = "./error_on_both.txt";
    let paths = fs::read_to_string(error_file).expect("Failed to read error file");
    let paths: Vec<&str> = paths.lines().collect();

    let generator = LLM::new(
        "./models/deepseek-coder/deepseek-coder-33b-instruct.Q4_K_M.gguf",
        LLM::model_options(),
        LLM::predict_options(),
        "./models/deepseek-coder/prompt-template.txt",
        
    );
    let all_features = get_all_features();

    for path in paths{
        let test_number = path.trim_start_matches("./test_cases/test").trim_end_matches(".c").parse().unwrap();
        println!("Test number: {}", test_number);
        let feature = &all_features[test_number];
        let test_to_improve = read_test_case(test_number);
        let out = generator.generate_output(create_fix_prompt(&feature.0, &feature.1, &test_to_improve), LLM::predict_options());
        println!("Section: {}, Feature: {}", &feature.0, &feature.1);
        println!("{}", &out);
        match extract_code_block(&out) {
            Some(code) => {println!("Extracted code:\n{}", code);
            save_test_case(test_number, code);
        },
            None => println!("Input does not contain a valid code block."),
        }
    }
    
}

fn improve_test_cases(test_indices: &mut TestIndices){
    let generator = LLM::new(
        "./models/deepseek-coder/deepseek-coder-33b-instruct.Q4_K_M.gguf",
        LLM::model_options(),
        LLM::predict_options(),
        "./models/deepseek-coder/prompt-template.txt",
        
    );

    let current_test_improve_index = test_indices.current_test_improve_index;
    let all_features = get_all_features();
    for i in current_test_improve_index..all_features.len(){
        let feature = &all_features[i];
        let test_to_improve = read_test_case(i);
        let out = generator.generate_output(create_improve_prompt(&feature.0, &feature.1,&test_to_improve), LLM::predict_options());
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

// Function to save contents of a vector to a file
fn save_to_file(file_path: &str, lines: &Vec<String>) {
    let mut file = File::create(file_path)
        .expect("Unable to create file");

    for line in lines {
        writeln!(file, "{}", line)
            .expect("Unable to write data to file");
    }
}



fn run_and_compare_outputs(compiler_list: Vec<Compiler>) {
    let test_cases_dir = "./test_cases";
    let timeout_duration = Duration::from_secs(7); // Set the timeout duration to 5 seconds

    // List all test case files in the directory
    let test_files = fs::read_dir(test_cases_dir)
        .expect("Failed to read test cases directory") // Proper error handling for directory reading
        .filter_map(|entry| entry.ok()) // Filter out Err values and unwrap Ok values
        .filter(|entry| entry.path().is_file()) // Ensure the entry is a file
        .collect::<Vec<_>>();

    // Sort the test files by their numeric order if they follow a "test[number].extension" format
    let mut test_files_sorted = test_files;
    test_files_sorted.sort_by_key(|dir_entry| {
        dir_entry.path().file_stem()
            .and_then(|stem| stem.to_str())
            .and_then(|stem_str| stem_str.trim_start_matches("test").parse::<usize>().ok())
            .unwrap_or(usize::MAX)
    });


    let mut tests = Vec::new();

    let mut test_error = Vec::new();
    let mut differing_outputs = Vec::new();

    //limit the test files sorted to 10 for testing
    // let test_files_sorted = &test_files_sorted[..100.min(test_files_sorted.len())];

    for dir_entry in test_files_sorted {
        let file_path = dir_entry.path();
        let file_path_str = file_path.to_str().unwrap_or_default(); // Convert the path to a string for display and use

        let mut test = Test::new(file_path_str);

        test.run_test_on_compilers(&compiler_list, timeout_duration);
        test.analyze_test_results();
        let analysis = test.result.as_ref().unwrap();

        match analysis {
            TestResult::Success(message) => {
                println!("{}: {}", file_path_str, message);
            },
            TestResult::CompileError(message) => {
                println!("{}: {}", file_path_str, message);
                test_error.push(file_path_str.to_string());

            },
            TestResult::RuntimeError(message) => {
                println!("{}: {}", file_path_str, message);
                test_error.push(file_path_str.to_string());
            },
            TestResult::Discrepancy(message) => {
                println!("{}: {}", file_path_str, message);
                differing_outputs.push(file_path_str.to_string());
            },
        }
        tests.push(test);
    }

    //save the test error files to a file
    let error_file = "./error_on_both.txt";
    let differing_file = "./differing_outputs.txt";

    save_to_file(error_file, &test_error);
    save_to_file(differing_file, &differing_outputs);

    create_report(tests, compiler_list);  


}

fn create_report(tests: Vec<Test>, compiler_list: Vec<Compiler>) {
    // Path to the HTML template
    let template_path = "report_template.html";
    // Read the HTML template
    let mut template_html = fs::read_to_string(template_path)
        .expect("Failed to read HTML template");

    // String to store the final report HTML
    let mut final_report_html = String::new();

    let mut compiler_name_html = String::new();
    for compiler in &compiler_list {
        compiler_name_html += &format!("<th>{}</th>", compiler.name);
    }

    template_html = template_html.replace("{{compiler_names}}", &compiler_name_html);

    let mut tests_html = String::new();


    for test in tests {
        let mut compiler_outputs_html = String::new();
        for (compiler, output) in &test.outputs {
            let output_str = match output {
                Ok(output) => output.to_string(),
                Err(err) => err.to_string(),
            };
            compiler_outputs_html += &format!("<td class=\"compiler-output\"><div class=\"content\">{}</div></td>", output_str);
        }

        let mut result_str = "Unknown Result";
        let mut result_class = "unknown";
        match &test.result {
            Some(TestResult::Success(message)) => {result_str = message; result_class = "success";},
            Some(TestResult::CompileError(message)) => {result_str = message; result_class = "compile-error";},
            Some(TestResult::RuntimeError(message)) => {result_str = message; result_class = "runtime-error";},
            Some(TestResult::Discrepancy(message)) => {result_str = message; result_class = "discrepancy";},
            None => {result_str = "Unknown Result"; result_class = "unknown";},
        }
        
        

       
        let test_html = format!("<tr>
        <td class=\"test-name\">{test_case_name}</td>
        <td class=\"test-code\"><div class=\"content\"><pre>{test_code}</pre></div></td>
        {compiler_outputs}
        <td class=\"result {result_type}\">{test_result}</td>
    </tr>", test_case_name = test.file_path, 
            test_code = read_test_case_content(&test.file_path), 
            compiler_outputs = compiler_outputs_html,
            result_type = result_class,
            test_result = result_str);
        // Append this test's HTML to the final report
        tests_html += &test_html;
    }
    template_html = template_html.replace("{{tests}}", &tests_html);

    // Save the final report HTML to a file
    fs::write("compiler_test_report.html", template_html)
        .expect("Failed to write HTML report");
}

// Helper function to read test case content
fn read_test_case_content(file_path: &str) -> String {
    fs::read_to_string(file_path).unwrap_or_else(|_| "Error reading test case".to_string())
}



fn main() {
    let mut indices = TestIndices::new("test_indices.json");
    indices.read_from_file().unwrap();
    let compiler_list = vec![Compiler::new("clang"), Compiler::new("gcc")];
    // generate_test_cases(&mut indices);

    run_and_compare_outputs(compiler_list);
    // fix_broken_tests();
    

    
    

}

