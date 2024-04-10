
#include <stdio.h>
#include <math.h>

double ctanh(double x) {
    double exp_x = exp(x);
    double exp_negx = exp(-x);
    
    return (exp_x - exp_negx) / (exp_x + exp_negx);
}

int main(void) {
    double num = 0.5;
    double result = ctanh(num);

    printf("The hyperbolic tangent of %f is %f\n", num, result);

    return 0;
}
