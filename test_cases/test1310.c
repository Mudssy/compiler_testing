
#include <stdio.h>
#include <math.h>

int main() {
    double x = -1.0;  // The argument should be in the range of [-1, 1]
    double result = cacosh(x);  // Calculate the hyperbolic cosine of a number
    
    if (isnan(result)) {  // Check if result is not a number
        printf("NaN");  // Print NaN if the function is unsupported
    }
    
    return 0;
}
