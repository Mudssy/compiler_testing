
#include <stdio.h>

int main() {
    int a = 5, b = 2; // Test values
    
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b); // Assumes integer division. If you need floating point, use a and b as floats or doubles
    printf("Modulus: %d\n", a % b);
    
    return 0;
}
