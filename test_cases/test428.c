
#include <stdio.h>

int main() {
    int result;

    __asm__("movl $5, %0" : "=r"(result));
    
    printf("Result: %d\n", result);

    return 0;
}
