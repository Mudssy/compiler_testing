
#include <stdio.h>
#include <complex.h>

int main(void) {
    double complex z = catanh(0 + 0 * I);
    printf("The value of catanh(0+0i) is: %f + %fi\n", creal(z), cimag(z));
    return 0;
}
