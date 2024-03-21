
#include <stdio.h>
#include <llvm-c/Linker.h>
#include <llvm-c/TargetMachine.h>

int main() {
    LLVMTargetRef target_ref = LLVMGetTargetFromTriple(LLVMDefaultTargetTriple(), NULL, 0);
    if(!target_ref) {
        printf("Failed to create target reference for default triple\n");
        return -1;
    }

    char *error_msg = NULL;
    LLVMTargetMachineRef machine_ref = LLVMCreateTargetMachine(
                                                target_ref,
                                                "",
                                                "",
                                                0,
                                                0,
                                                &error_msg);
    if(!machine_ref) {
        printf("Failed to create Target Machine: %s\n", error_msg);
        LLVMDisposeMessage(error_msg);
        return -1;
    }

    // Rest of the program...
    
    LLVMDisposeTargetMachine(machine_ref);
    return 0;
}
