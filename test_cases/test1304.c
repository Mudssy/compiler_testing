
#include <complex.h> // Include complex number support
#include <stdio.h>   // For printf

int main() {
    double complex z = cacos(I); // Calculate the inverse cosine of i (which is pi/2)
    
    printf("The value of cacos(i) is: %.2f + %.2fi\n", creal(z), cimag(z)); // Print out the result

    return 0;
}
