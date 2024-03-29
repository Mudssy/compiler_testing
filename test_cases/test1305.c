
#include <stdio.h>
#include <complex.h>

int main() {
    double complex z = 1.0 + 3.0 * I;
    double complex c = casin(z);
    printf("The arc sine of %.2f + %.2fi is %.2f + %.2fi.\n", creal(z), cimag(z), creal(c), cimag(c));
    
    return 0;
}
