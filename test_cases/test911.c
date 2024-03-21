
#include <stdio.h>
#include <llvm-c/Remarks.h> // assuming llvm-c is available for Remarks support

int main() {
    char PassID[] = "Test";
    remarks::createPassed(remarks::passArg("test"), PassID);
    
    printf("Hello, world!\n");
    
    return 0;
}
