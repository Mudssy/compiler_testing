use llama_cpp_rs::{
    options::{ModelOptions, PredictOptions},
    LLama,
};
use std::fs;

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
        context_size: 10000,
        
        ..Default::default()
    }
} 

fn create_predict_options() -> PredictOptions{
    PredictOptions {
        // token_callback: Some(Box::new(|token| {
        //     print!("{}", token.clone());

        //     true
        // })),
        m_map: false,
        threads: 10,
        debug_mode:false,
        tokens: 1000,
        prompt_cache_all: true,



        ..Default::default()
    }
}

fn generate_prompt(compiler_section: &str, feature_to_test: &str) -> String{
    format!("I want to test different sections of compilers for the C programming language.
    To do this I want to generate specific C programs which cover specific features of the compiler.
    I can then run these programs through different compilers to see if they are supported and compare the outputs for each compiler.
    I want to test the {} feature for the C programming language for the {} section of the compiler.
    Generate a main function for the C programming language which prints out some specific output based on that feature which I could then use to compare the outputs of.
    Do not include any explanation or and writing, just the program to be run ",feature_to_test,compiler_section)
    
}

fn create_model() -> LLama{
    let model_options = create_model_options();
    LLama::new(
        "./models/phind-codellama/phind-codellama-34b-v2.Q4_K_M.gguf".into(),

        &model_options,

    )
    .unwrap()
}

fn generate_output(prompt: String, llama: &LLama) -> String{
    let out = 
    llama
        .predict(
            prompt,
            create_predict_options(),

        ).unwrap();
    out
}

fn main() {
    // let llama = create_model();
    // let feature_to_test = "clang/lib/CodeGen";
    // let prompt = generate_prompt(feature_to_test);
    // let out = generate_output(prompt, &llama);
    // println!("{}", out);

    let generator = LLM::new(
        "./models/phind-codellama/phind-codellama-34b-v2.Q4_K_M.gguf",
        create_model_options(),
        create_predict_options(),
        "./models/phind-codellama/prompt-template-begin.txt",
        "./models/phind-codellama/prompt-template-end.txt",
    );

    println!("{}", generator.generate_output(generate_prompt("llvmlibAsmParser", "Syntax Validation: Ensuring the parser correctly identifies valid and invalid assembly syntax."), create_predict_options()));



}

