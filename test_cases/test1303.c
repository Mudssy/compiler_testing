
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;
    
    printf("Working with complex numbers:\n\v");
    
    // Addition
    printf("Add: %.2f + %.2fi\n", creal(z1+z2), cimag(z1+z2));
    
    // Subtraction
    printf("Sub: %.2f + %.2fi\n", creal(z1-z2), cimag(z1-z2));
    
    // Multiplication
    printf("Mul: %.2f + %.2fi\n", creal(z1*z2), cimag(z1*z2));
    
    // Division
    printf("Div: %.2f + %.2fi\n", creal(z1/z2), cimag(z1/z2));

    return 0;
}
