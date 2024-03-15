
#include <stdio.h>

int main() {
    int a = 5;
    int b = 0;
    __builtin_safemath_div(a, b);
    printf("Division of %d by %d is: %d\n", a, b, a / b);
    return 0;
}
