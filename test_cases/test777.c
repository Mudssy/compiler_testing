
#include <stdio.h>

int main() {
    int i = 42;
    float f = 3.14f;
    double d = 2.71828;
    char c = 'A';
    _Bool b = 1;

    printf("Integer: %d\n", i);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("Char: %c\n", c);
    printf("Bool: %s\n", b ? "true" : "false");

    return 0;
}
