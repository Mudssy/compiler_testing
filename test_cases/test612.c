
#include <stdio.h>
#include <complex.h>
#include <math.h>

int main() {
    double complex z1 = 1.0 + 3.0 * I; // Declare and initialize a complex number
    
    double complex result = ccos(z1); // Apply the cos function to it
    
    printf("The real part is: %f\n", creal(result));
    printf("The imaginary part is: %f\n", cimag(result));
    
    return 0; // Return statement ends execution of main function
}
