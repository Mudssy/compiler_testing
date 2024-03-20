
#include <stdio.h>

int main() {
    int result = 0;
    
    asm ("movl $15, %%eax\n\t"   // move 15 to register eax
         "addl $25, %%eax\n\t"   // add 25 to register eax
         "movl %%eax, %0\n\t"    // move result from eax to variable result
        : "=r"(result)           // output registers
        :                       // input operands
        : "%eax"                 // clobbered registers
    );
    
    printf("The result is: %d\n", result);

    return 0;
}
