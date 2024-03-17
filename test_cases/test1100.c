
#include <stdio.h>

int main() {
    int a = 10;
    const int b = 20;
    volatile int c = 30;
    int *ptr_a = &a;
    const int *ptr_b = &b;
    volatile int *ptr_c = &c;
    
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);
    
    *ptr_a = 15;
    *ptr_c = 35;
    
    printf("Modified value of a: %d\n", a);
    printf("Modified value of b: %d\n", b);
    printf("Modified value of c: %d\n", c);
    
    return 0;
}
