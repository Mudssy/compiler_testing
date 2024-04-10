
#include <stdio.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>

int main() {
    gsl_complex z = gsl_complex_rect(1.0, 3.0);
    gsl_complex c = gsl_complex_arcsin(z);
    
    printf("The arc sine of the complex number is: %g + %gi\n", GSL_REAL(c), GSL_IMAG(c));
    
    return 0;
}
