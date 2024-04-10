
#include <stdio.h>
#include "llvm-c/Core.h"   //LLVM core C API
#include "llvm-c/TargetMachine.h"   //LLVM target machine C API

int main() {
    LLVMContextRef context = LLVMContextCreate();
    LLVMModuleRef module = LLVMModuleCreateWithNameInContext("test", context);
    
    char* errorMessage = NULL;
    if (LLVMVerifyModule(module, LLVMAbortProcessAction, &errorMessage) == LLVMBoolTrue) {
        printf("IR is not valid: %s\n", errorMessage);
        LLVMDisposeMessage(errorMessage);
        return -1;
    } else {
        printf("IR is valid\n");
    }

    LLVMDisposeModule(module);
    
    return 0;
}
