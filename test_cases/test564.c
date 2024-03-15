
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z = 1.0 + 2.0 * I;
    printf("The square of %f + %fi is %f + %fi\n", creal(z), cimag(z), creal(z * z), cimag(z * z));
    return 0;
}
