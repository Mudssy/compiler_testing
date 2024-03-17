
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    __asm__("add %1, %0\n\t" : "+r" (a) : "r" (b));
    printf("The sum of %d and %d is %d\n", 5, 10, a);
    return 0;
}
