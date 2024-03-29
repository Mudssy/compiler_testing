
#include <complex.h> // Required library for creal

int main() {
    double complex z = 1.0 + 3.0 * I; 

    // Prints 'Real Part: 1.0000'
    printf("Real Part: %f\n", creal(z));
    
    return 0; 
}
