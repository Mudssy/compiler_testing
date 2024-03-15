
#include <stdio.h>

int main() {
    volatile int a = 5;
    const int b = 10;
    int c = 7;
    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;
    
    printf("Initial values: a = %d, b = %d, c = %d\n", a, b, c);

    a += 10;
    *ptr_b -= 5;
    *ptr_c *= 2;

    printf("Modified values: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
