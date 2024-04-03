
#include <stdio.h>
#include "llvm-c/Core.h"  //LLVM core C API
#include "llvm-c/TargetMachine.h"  //LLVM target machine C API

int main() {
    const char* irCode = "define i32 @main() { ret i32 0 }";
    LLVMModuleRef module;
    
    if (LLVMParseIRInContext(LLVMGetGlobalContext(), &module, irCode, NULL, 0)) {
        printf("Failed to parse IR\n");
        return -1;
    }

    char* errorMessage = LLVMVerifyModule(module, LLVMAbortProcessAction, NULL);
    
    if (errorMessage) {
        fprintf(stderr, "Error: %s\n", errorMessage);
        LLVMDisposeMessage(errorMessage);
        return -1;
    } else {
        printf("IR is valid\n");
    }

    LLVMDisposeModule(module);
    
    return 0;
}
