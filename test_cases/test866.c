
#include <stdio.h>
#include "llvm-c/Remarks.h"
#include "llvm-c/Core.h"

void onremark(char *Pass, char *Name, char *Function, enum RemarkType Type, void *UserData) {
    printf("Pass: %s\n", Pass);
    printf("Name: %s\n", Name);
    printf("Function: %s\n", Function);
    printf("Type: %d\n", (int)Type);
}

int main() {
    LLVMInitializeRemarkDiagnostic();
    LLVMPassRegistryRef Registry = LLVMCreatePassRegistry();
    LLVMSetGlobalContext(LLVMContextCreate());
    
    LLVMRegisterRemarkCallback(onremark, NULL);

    // Compile or optimize your code here...

    return 0;
}
