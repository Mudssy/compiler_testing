
#include <stdio.h>

int main() {
    int src = 10;
    int dst;

    __asm__ ( "mov %1, %0\n"
              : "=r"(dst)
              : "r"(src) 
            );

    printf("The value of 'dst' is: %d\n", dst);

    return 0;
}
