
#include <math.h>
#include <stdio.h>

int main() {
    double param, result;
    param = 10.0;
    
    /* Testing tanh */
    result = tanh(param);
    printf("The hyperbolic tangent of %f is %f\n", param, result);

    return 0;
}
