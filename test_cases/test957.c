
#include <stdio.h>

int main(void) {
    int x = 10;
    printf("The value of x is: %d\n", x);
    
    /* This block of code represents an example of LLVM IR asm code */
    __asm__(".globl my_function\n"
            "my_function:\n"
            "movl $1,%%eax\n"
            "ret\n");
    return 0;
}
