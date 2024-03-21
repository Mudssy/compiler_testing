
#include <stdio.h>

void __attribute__((optimize("O0"))) foo() { } 

int main(int argc, char **argv) {
    #pragma clang system_header
    asm volatile(".llvm.compiler.metadata !{ \"llvm.module.flags\"" ",\"wchar_size 4\" } \n\t");
    
    foo();
    
    printf("llvm remarks enabled\n");
    
    return 0;
}
