
#include <stdio.h>

int main(void) {
    int a = 1;
    __asm__("movl $2, %0" : "=m"(a));
    
    printf("%d\n", a); // expected output: 2

    return 0;
}
