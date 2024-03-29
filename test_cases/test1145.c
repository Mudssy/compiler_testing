
#include <stdio.h>
#include <complex.h>

int main(void) {
    double complex z = 1.0 + 2.0*I;   // This is the GNU extension for complex numbers
    
    printf("Real part: %f\n", __real__(z));
    printf("Imaginary part: %f\n", __imag__(z));
    
    return 0;
}
