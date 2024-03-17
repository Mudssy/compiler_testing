
#include <stdio.h>

int main() {
    int result;

    __asm__("movl $5, %eax;"      // Move 5 into eax register
            "addl $3, %eax;"      // Add 3 to eax register
            "movl %%eax, %0;"     // Move eax value to result
            : "=r"(result)        // Output constraint: write result to variable
            :                     // Input constraints: none
            : "%eax"              // Clobbered registers: eax
           );

    printf("The result of adding 5 and 3 is: %d\n", result);

    return 0;
}
