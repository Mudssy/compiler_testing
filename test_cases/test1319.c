
#include <stdio.h>
#include <math.h>

int main() {
    double base = 2; 
    double exponent = -10;
    double result = pow(base, exponent);
    
    printf("The result of %f raised to the power of %f is: %f\n", base, exponent, result);
    
    return 0;
}
