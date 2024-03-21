
#include <stdio.h>
#include <llvm-c/Core.h>
#include <llvm-c/BitReader.h>
#include <llvm-c/BitWriter.h>

int main(void) {
    LLVMModuleRef module = LLVMModuleCreateWithName("test_module");
    
    // Create a function type taking an integer as argument and returning an integer
    LLVMTypeRef intTy = LLVMInt32Type();
    LLVMTypeRef funcTy = LLVMFunctionType(intTy, &intTy, 1, 0);

    // Define a basic block inside the function with the name "entry"
    LLVMBasicBlockRef bb = LLVMAppendBasicBlock(module, "entry");

    // Create an instruction of type return which returns constant integer value 5.
    LLVMValueRef returnInst = LLVMConstInt(intTy, 5, 0);

    // Insert the return instruction into the entry basic block
    LLVMBuildRet(LLVMGetBuilder(), returnInst);
}
