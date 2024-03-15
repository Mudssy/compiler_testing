
#include <stdio.h>

int main() {
    int result;

    asm("movl $5, %0\n" : "=r" (result));

    printf("The result is: %d\n", result);

    return 0;
}
