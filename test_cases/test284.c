
#include <stdio.h>

int main() {
    __asm__("movl $2, %%eax\n\t"
            "movl $3, %%ebx\n\t"
            "addl %%ebx, %%eax\n\t");

    int result;
    __asm__("movl %%eax, %0" : "=r"(result));

    printf("The result of adding 2 and 3 is: %d\n", result);

    return 0;
}
