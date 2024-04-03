
#include <stdio.h>

int main() {
    // Test different representations of floats
    
    printf("Float with no decimal or exponent:\n"); 
    float a = 10;
    printf("%f\n", a);
    
    printf("\nFloat with decimals but no exponent:\n");
    float b = 2.5;
    printf("%f\n", b);

    printf("\nFloat with decimal and positive exponent:\n"); 
    float c = 1.3e+2; // 1.3 * (10^2)
    printf("%f\n", c);
    
    printf("\nFloat with decimal and negative exponent:\n");
    float d = -6.7e-1; // -6.7 / (10^1)
    printf("%f\n", d);

    return 0;
}
