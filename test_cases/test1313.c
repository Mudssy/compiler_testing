
#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0; // Input value in radians
    
    double result = ccosh(x); // Compute the hyperbolic cosine
    
    printf("Hyperbolic Cosine of %f is: %f\n", x, result); // Print results
    
    return 0;
}
