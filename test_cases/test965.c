
#include <stdio.h>
#include <llvm-c/Support.h>

int main() {
    const char *ErrorMsg = NULL;
    
    // Create a memory buffer for the archive
    LLVMMemoryBufferRef Buffer = LLVMCreateMemoryBufferWithContentsOfFile("testarchive.a", &ErrorMsg);
    
    // Check if the creation of the memory buffer was successful
    if (Buffer == NULL) {
        printf("Failed to create memory buffer: %s\n", ErrorMsg);
        return 1;
    }

    // Create an object file from the archive
    LLVMObjectFileRef Object = LLVMCreateObjectFile(Buffer, &ErrorMsg);
    
    // Check if the creation of the object file was successful
    if (Object == NULL) {
        printf("Failed to create object file: %s\n", ErrorMsg);
        return 1;
    }
    
    // Print a success message
    printf("Successfully read archive\n");
    
    // Clean up and exit
    LLVMDisposeMemoryBuffer(Buffer);
    LLVMDisposeObjectFile(Object);
    
    return 0;
}
