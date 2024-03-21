
#include <iostream>
#include <llvm/Support/RemarkFormat.h> // Provided by libc++
#include <llvm/IR/DiagnosticInfo.h> 
#include <llvm/IR/DiagnosticPrinter.h>
// ... other necessary includes

int main() {
    llvm::remark::Arg Arg1("arg_name", "arg_value");
    std::string DebugMsg = "Debug message";
    
    // Create a remark with a single argument and debug message
    llvm::remarks::Remark R(llvm::remarks::Type::Passed, "pass_name", 12345);
    R << Arg1;
    R.setDebugLoc(llvm::DebugLoc().getLocation()); // Add a debug location
    R.addMsg(DebugMsg);
    
    std::cout << R; // Print the remark to console
    return 0;
}
