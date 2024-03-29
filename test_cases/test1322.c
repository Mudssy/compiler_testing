
#include <complex.h>
#include <stdio.h>

int main() {
    double complex z = 1.0 + 3.0 * I;
    double imagpart = cimag(z);
    printf("The imaginary part of z is %f\n", imagpart);
    return 0;
}
