
#include <stdio.h>

int main() {
    int a = 1;
    float b = 2.0f;
    char *p1 = (char *)&a;
    char *p2 = (char *)&b;
    
    printf("Initial values: a = %d, b = %.1f\n", a, b);

    *p1 = 42;
    printf("After changing value of *p1: a = %d, b = %.1f\n", a, b);

    return 0;
}
