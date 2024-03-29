
#include <stdio.h>
#include <math.h>

int main(void) {
    double value, fraction;
    
    // Set a specific value
    value = 123.456;

    // Use modf to split the value into two parts
    fraction = modf(value, &value);

    printf("The integer part of %lf is %lf\n", value+fraction, value);
    printf("The fractional part of %lf is %lf\n", value+fraction, fraction);

    return 0;
}
