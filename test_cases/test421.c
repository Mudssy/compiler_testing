
#include <stdio.h>

int main() {
    struct {
        int a;
        float b;
    } var1 = {10, 20.5};

    union {
        int c;
        float d;
    } var2 = {30};

    printf("var1: a = %d, b = %.2f\n", var1.a, var1.b);
    printf("var2: c = %d, d = %.2f\n", var2.c, var2.d);

    return 0;
}
