
#include <stdio.h>

void foo(int* restrict p1, int* restrict p2) {
    *p1 = 4; // No aliasing with p1 and p2 allowed
    *p2 = 5; // No aliasing with p1 and p2 allowed
}

int main() {
    int a = 0;
    int b = 0;

    printf("Before: a = %d, b = %d\n", a, b);
    foo(&a, &b); // No aliasing with a and b here either
    printf("After:  a = %d, b = %d\n", a, b);

    return 0;
}
