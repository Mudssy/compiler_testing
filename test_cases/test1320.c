
#include <stdio.h>
#include <complex.h>

int main() {
    double _Complex num = 4.0 + 0.0*I; // create a complex number with real part 4 and imaginary part 0
    double _Complex result = csqrt(num); // compute square root of the complex number
    
    printf("Square root of %f + %fi is %f + %fi\n", creal(num), cimag(num), creal(result), cimag(result));
    return 0;
}