
#include <math.h> // Include the math library for tanh() function
#include <stdio.h> 

int main() {
    double param, result; 
    
    param = 10.0;  
    
    /* Testing tanh */
    result = tanh(param); // Calculate the hyperbolic tangent of 'param'
    
    printf("The hyperbolic tangent of %f is %f\n", param, result); 
    
    return 0; 
}
