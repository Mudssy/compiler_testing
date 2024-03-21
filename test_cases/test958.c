
#include <stdio.h>
#include <llvm-c/Disassembler.h>
#include <llvm-c/Target.h>

int main() {
    LLVMInitializeAllTargetInfos();
    LLVMInitializeAllTargets();
    LLVMInitializeAllTargetMCs();
    LLVMInitializeAllAsmPrinters();
    
    const char *triple = "x86_64-pc-linux-gnu"; // replace with your target triple
    char error[128];
    LLVMTargetRef target;
    LLVMTargetMachineRef machine;
    LLVMCreateDisasmCPUFeatures(triple, &error);
    
    if (LLVMGetTargetFromTriple(triple, &target, NULL)) {
        fprintf(stderr, "Error getting the target: %s\n", error);
        return 1;
    }

    LLVMStyle style = LLVMDisasm_Att;
    
    if (LLVMCreateTargetMachine(target, triple, "", "", style, LLVMCodeGenLevelDefault, "", &machine)) {
        fprintf(stderr, "Error creating the target machine: %s\n", error);
        return 1;
    }

    // TODO: Implement your disassembling logic here using `LLVMDisasmInstruction` function.
    
    LLVMDisposeTargetMachine(machine);
    return 0;
}
