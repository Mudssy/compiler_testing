
#include <stdio.h>
#define ASM_BLOCK(...) __asm__ (__VA_ARGS__)

int main() {
    int x = 10;
    int y = 20;
    
    printf("Before the inline asm block:\n");
    printf("x = %d, y = %d\n", x, y);
    
    ASM_BLOCK(
        "movl $30, %%eax;"
        "movl %%eax, %[result];"
        : [result] "=r"(x)  // output operand
        ::               // input operands: none
        : "%eax"          // clobbered registers
    );
    
    printf("After the inline asm block:\n");
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}
