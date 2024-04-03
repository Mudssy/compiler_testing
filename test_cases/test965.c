
#include <stdio.h>
#include "llvm-c/Object.h"
#include "llvm-c/Support.h"

int main() {
    // Try to open and read the archive file
    OwningObjectFile *Object = LLVMCreateObjectFile("./test.o");
    
    if (LLVMGetErrorType(LLVMGetLastError()) != LLVMSuccess) {
        char* errorMsg = LLVMConsumeErrorMessage();
        printf("Error reading archive: %s\n", errorMsg);
        return 1;
    }
    
    // Print a success message
    printf("Successfully read archive\n");
    
    // Clean up and exit
    OwningMemoryBuffer *buffer = Object->OwningObjectFileBuffer;
    LLVMDisposeObjectFile(Object);
    LLVMDisposeMemoryBuffer(buffer);
    
    return 0;
}
