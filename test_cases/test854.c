
#include <stdio.h>
#include <complex.h>

int main() {
    double complex c1 = 2 + 3 * I;
    double complex c2 = cexp(c1);
    
    printf("%f + %fi\n", creal(c2), cimag(c2));
    return 0;
}
