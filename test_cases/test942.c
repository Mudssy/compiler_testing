
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    float c = 35.5f;
    double d = 45.6;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %.2f\n", (float)a / (float)b);
    printf("Modulus: %d\n", a % b);

    printf("Float Addition: %.2f\n", c + d);
    printf("Float Subtraction: %.2f\n", c - d);
    printf("Float Multiplication: %.2f\n", c * d);
    printf("Float Division: %.2f\n", c / d);

    return 0;
}
