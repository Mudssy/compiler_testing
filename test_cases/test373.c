
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %f\n", (float)a / b); // cast one of the numbers to float to get floating point division
    printf("Modulo: %d\n", a % b);

    return 0; // Returning zero indicates successful execution.
}
