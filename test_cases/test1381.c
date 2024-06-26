
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;
    
    printf("Working with complex numbers:\n\v");

    printf("Starting values: Z1 = %.2f + %.2fi, Z2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
    
    double complex sum = z1 + z2;
    printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));
    
    double complex difference = z1 - z2;
    printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));
    
    double complex product = z1 * z2;
    printf("The product: Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));

    double complex quotient = z1 / z2;
    printf("The quotient: Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));

    return 0;
}
