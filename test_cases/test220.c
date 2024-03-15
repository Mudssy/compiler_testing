
#include <stdio.h>

int main() {
    int i = 01234567; // Octal integer constant
    int b = 0b10110110; // Binary integer constant (C99 feature)
    int h = 0xABCDEF; // Hexadecimal integer constant

    float f = 1.234e5f; // Floating point constant with exponent
    double d = 1.234e-5; // Double precision floating point constant with exponent

    printf("Octal: %d\n", i);
    printf("Binary: %d\n", b);
    printf("Hexadecimal: %d\n", h);
    printf("Float: %.6f\n", f);
    printf("Double: %.10lf\n", d);

    return 0;
}
