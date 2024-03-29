
#include <stdio.h>
#include <math.h>

int main() {
    double x = 1024;
    int exp;

    // split the number into a fraction and an exponent
    double frac = frexp(x, &exp);

    printf("The fractional part of %f is %.2f\n", x, frac);
    printf("The exponent part of %f is %d\n", x, exp);

    return 0; // Make sure this doesn't run forever
}
