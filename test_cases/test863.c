
#include <stdio.h>

void __attribute__((optimize("O0"))) foo() { } 

int main(int argc, char **argv) {
    asm volatile(".llvm.remark \"My remark\"");
    
    foo();
    
    printf("llvm remarks enabled\n");
    
    return 0;
}
