
#include <stdio.h>
#include <math.h>

int main(void) {
    double num = 0.5;
    double result = tanh(num);

    printf("The hyperbolic tangent of %f is %f\n", num, result);

    return 0;
}
