
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    printf("Before: a = %d, b = %d\n", a, b);
    ((a > b) ? printf("a is greater than b\n") : printf("b is greater than or equal to a\n"));
    a *= (a > b) ? 2 : 3;
    b *= (a <= b) ? 2 : 3;
    printf("After: a = %d, b = %d\n", a, b);
    return 0;
}
