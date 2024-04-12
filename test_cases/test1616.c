
#include <stdio.h>

int main() {
    int result;
    
    __asm__ ("movl $3, %%eax;" // load 3 into register eax
             "movl $4, %%ebx;" // load 4 into register ebx
             "addl %%ebx, %%eax;" // add the contents of ebx to eax
             "movl %%eax, %0" // store result back into variable result
            : "=r"(result) /* output */
            : /* no input */
            : "%eax", "%ebx" /* clobbered registers */
    );
    
    if (result == 7) {
        printf("Assembly works\n");
    } else {
        printf("Assembly failed\n");
    }
    
    return 0;
}
