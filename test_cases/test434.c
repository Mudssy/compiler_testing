
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 3 + 2 * I;
    double complex z2 = 4 - 5 * I;
    double complex sum = z1 + z2;
    double complex difference = z1 - z2;
    double complex product = z1 * z2;
    double complex quotient = z1 / z2;

    printf("z1: %f + %fi\n", creal(z1), cimag(z1));
    printf("z2: %f + %fi\n", creal(z2), cimag(z2));
    printf("Sum: %f + %fi\n", creal(sum), cimag(sum));
    printf("Difference: %f + %fi\n", creal(difference), cimag(difference));
    printf("Product: %f + %fi\n", creal(product), cimag(product));
    printf("Quotient: %f + %fi\n", creal(quotient), cimag(quotient));
    
    return 0;
}
