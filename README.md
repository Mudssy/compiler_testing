# Compiler Testing Tool

This tool is designed for testing compilers by generating, running, and comparing test cases across different compiler implementations. It leverages machine learning models to generate test cases for various programming features, then compiles and runs these tests using specified compilers (e.g., GCC, Clang) to identify discrepancies, runtime errors, or compilation errors.

## Cloning the Repository

To get started with this tool, you need to clone the repository including its submodules. Use the following command:

```bash
git clone --recurse-submodules <repository-url>
```

Replace `<repository-url>` with the actual URL of the GitHub repository.

## Dependencies

Before using the tool, ensure you have the following dependencies installed:

- **Compilers**: The tool requires at least two compilers to be installed on your system. The default configuration uses GCC and Clang. Ensure these are installed and accessible in your system's PATH.
- **Rust**: The Rust programming language and its package manager, Cargo, must be installed to compile and run the tool. Visit [Rust's official website](https://www.rust-lang.org/tools/install) for installation instructions.
- **LLama Library**: The tool leverages the LLama library for generating test cases using machine learning models. Ensure this library is correctly set up as per its documentation.

## Feature Files

The tool reads feature files stored in the `./features` directory. Each line in these files represents a distinct feature to be tested. Ensure your feature files are structured accordingly, with each feature clearly defined on a new line.

## Model and Prompt Template

Machine learning models used for generating test cases should be placed in the `./models` directory. Additionally, a prompt template file is required to guide the generation process. This template should be located within the same directory and properly referenced in the tool's configuration.

## Compilation

To compile the program, navigate to the root directory of the cloned repository and run:

cargo build --release

This command compiles the program in release mode, optimizing the binary for performance.

## Running the Tool

After compilation, you can run the tool using the following command:
```bash
./target/release/compiler_testing <mechanism>
```
Replace `<mechanism>` with one of the available mechanisms as per the main file's instructions, such as `generate_test_cases`, `fix_broken_tests`, `improve_test_cases`, or `run_and_compare_outputs`.

### Available Mechanisms

- `generate_test_cases`: Generates test cases based on the features defined in the feature files.
- `fix_broken_tests`: Attempts to fix any tests that failed during previous runs.
- `improve_test_cases`: Enhances existing test cases for more thorough testing.
- `run_and_compare_outputs`: Compiles and runs the test cases using the specified compilers, comparing their outputs to identify discrepancies or errors.

Ensure that you have properly set up the required directories and files as per the instructions above before running any of these mechanisms.
