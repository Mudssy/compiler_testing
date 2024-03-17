
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    __asm__("movl %1, %%eax\n"
            "addl %2, %%eax\n"
            : "=a"(a)
            : "m"(a), "m"(b)
           );
    printf("The sum of a and b is: %d\n", a);
    return 0;
}
