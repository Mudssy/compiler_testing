
#include <stdio.h>

int my_function(void) {
    int x = -1; // Start with an invalid value
    
    __asm__ volatile (
        "movl $65535, %%eax\n"
        : "=a"(x)
        :: 
    );
    
    printf("The value of x is: %d\n", x);
    
    return 0;
}
