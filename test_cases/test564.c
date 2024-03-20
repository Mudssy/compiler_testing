
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 1.0 + 3.0 * I;  // create a complex number
    double complex z2 = 1.0 - 4.0 * I;  // another one
    
    printf("Working with complex numbers:\n\v");
    
    printf("Starting values: Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));

    double complex sum = z1 + z2;
    printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum)); //real part and imaginary part of sum
    
    return 0;
}
