
#include <stdio.h>
#include <llvm-c/Core.h>
#include <llvm-c/BitReader.h>
#include <llvm-c/BitWriter.h>

int main(void) {
    LLVMContextRef context = LLVMContextCreate();
    LLVMModuleRef module = LLVMModuleCreateWithName("test_module");
    
    // Create the return type: int
    LLVMTypeRef intTy = LLVMInt32TypeInContext(context);

    // Create a basic block and insert it into the function
    LLVMBasicBlockRef entryBB = LLVMAppendBasicBlock(module, "entry");
    LLVMPositionBuilderAtEnd(builder, entryBB);
    
    // Create a return instruction with value 5
    LLVMValueRef returnInst = LLVMConstInt(intTy, 5, 0);

    // Insert the return instruction into the entry basic block
    LLVMBuildRet(LLVMGetBuilder(), returnInst);
}
