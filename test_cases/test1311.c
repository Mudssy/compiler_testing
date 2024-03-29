
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z = casinh(1 + 0 * I); // I is the imaginary unit in C
    printf("The imaginary part of sinh(z) is: %f\n", cimag(sinh(z)));
    return 0;
}
