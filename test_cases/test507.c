
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 42;
    int *p = &x;
    __asm__("" : "=r"(*p) :: "memory");
    printf("%d\n", *p);
    return 0;
}
