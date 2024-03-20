
#include <stdio.h>
#include <stdlib.h>
#include <llvm-c/TargetMachine.h>
#include <llvm-c/Types.h>
#include <llvm-c/Transforms/Vectorize.h>

int main() {
    LLVMInitializeNativeTarget();

    // Create an integer vector type with 4 elements.
    LLVMTypeRef IntTy = LLVMInt32Type();
    LLVMTypeRef VectorTy = LLVMVectorType(IntTy, 4);
    
    printf("Testing shuffle vector for: %s\n", LLVMPrintTypeToString(VectorTy));
    
    // Test all possible combinations of shuffle masks.
    int i, j;
    for (i = 0; i < 16; ++i) {
        for (j = 0; j < 16; ++j) {
            LLVMValueRef Vector = LLVMBuildShuffleVector(NULL, IntTy, NULL, IntTy, IntTy, i, j);
            
            // Print the shuffle vector.
            printf("%s\n", LLVMPrintValueToString(Vector));
            
            // Free the memory used by the value.
            LLVMDisposeMessage(LLVMPrintValueToString(Vector));
        }
    }
    
    return 0;
}
