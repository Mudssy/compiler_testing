
#include <llvm-c/Disassembler.h>
#include <llvm-c/Target.h>
#include <stdio.h>

void disassemble(const char *triple, const void *code, size_t codeSize) {
    LLVMTargetRef target;
    LLVMTargetMachineRef machine;
    char* error = NULL;

    if (LLVMGetTargetFromTriple(triple, &target, &error)) {
        fprintf(stderr, "Error getting the target: %s\n", error);
        return;
    }

    LLVMStyle style = LLVMDisasm_AttachSymbolNameToAddress ? 0 : 2; // The result is not assembly but a human readable output.
    char* disassembleOutput;
    size_t length = LLVMDisasmInstruction(machine, (uint8_t*)code, codeSize, 0, style, &disassembleOutput, &error);

    if (!length) {
        fprintf(stderr, "Error disassembling: %s\n", error);
        return;
    }

    printf("%s\n", disassembleOutput);
}
