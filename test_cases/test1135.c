
#include <stdio.h>

int main(void) {
    int var = 10;
    
    __asm__ volatile ( /* use "volatile" to prevent compiler optimizations */ 
         "movl $5, %%eax\n" 
         : "=a"(var) /* output */
         : /* no input registers */ 
         : "%eax" /* clobbered register */ 
    );
    
    printf("%d\n", var);
    
    return 0;
}
