
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    asm ("alias_test: \n\t"
         "movl %%eax, %%ebx;" // Move the value of eax to ebx
         : "=r"(b)              // output operands (read-write). We use '=' for write-only as per gcc syntax. 
         : "r"(a)               // input operands. We use 'r' for read only.
         );

    printf("Value of b after assembly instruction: %d\n", b);
    
    return 0;
}
