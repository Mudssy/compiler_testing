
#include <stdio.h>
#include <math.h>

int main() {
    double x = -1.0; // Modify this value to test different inputs

    if(x < -1.0 || x > 1.0) {
        printf("Invalid input\n");
     } else {
        double result = asin(x);
        printf("The arc sine of %f is %f radians or %f degrees.\n", 
               x, result, result*180/M_PI);
    }

    return 0;
}
