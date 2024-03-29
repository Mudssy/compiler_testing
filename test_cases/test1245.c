
#include <stdio.h>
#include <math.h>

int main() {
    double x = 4.0;

    // Test sqrt function
    printf("sqrt(%.2f) = %.2f\n", x, sqrt(x));

    // Test pow function
    double y = 3.0;
    printf("pow(%.2f, %.2f) = %.2f\n", x, y, pow(x, y));

    // Test sin and cos functions
    double angle = 60.0;  // in degrees
    double radians = angle * M_PI / 180.0;
    printf("sin(%.2f) = %.2f\n", angle, sin(radians));
    printf("cos(%.2f) = %.2f\n", angle, cos(radians));

    return 0;
}
