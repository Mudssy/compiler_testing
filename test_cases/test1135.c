
#include <stdio.h>

int main(void) {
    int var = 10;
    
    __asm__ (
        "movl $5, %%eax\n"
        : "=a"(var) /* output */
        : /* no input registers */
        : "%eax" /* clobbered register */
    );
    
    printf("%d\n", var);
    
    return 0;
}
