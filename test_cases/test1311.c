
#include <stdio.h>
#include <math.h>  // Include math.h for pow(), sqrt(), etc.
#include <complex.h>

int main() {
    double complex z = csinh(1 + 0 * I);  // Calculate sinh(z) using csinh()
    printf("The imaginary part of sinh(z) is: %f\n", cimag(z));  // Print the imaginary part of sinh(z)
    return 0;
}
