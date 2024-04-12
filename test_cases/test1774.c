
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z1 = 5.0 + 3.0 * I;  // Create a complex number
    double complex z2 = conj(z1);      // Find the conjugate of the complex number
    
    printf("The conjugate of %.2f + %.2fi is: %.2f + %.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
    return 0;
}
