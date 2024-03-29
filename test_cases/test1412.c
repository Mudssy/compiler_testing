
#include <stdio.h>

void __llvmlibProfileFuncEntry(void *);
void __llvmlibProfileFuncExit(void *);

int foo() {
    void* FuncAddr = (void*)foo; // Get function address
    printf("Entering foo\n");
    __llvmlibProfileFuncEntry(FuncAddr); 

    printf("Inside foo\n");
    
    printf("Exiting foo\n");
    __llvmlibProfileFuncExit(FuncAddr);
}

int main() {
    foo();
    return 0;
}
