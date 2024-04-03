
#include <stdio.h>
#include <math.h>

int main() {
    double x = 4.0;

    // Test sqrt function
    printf("sqrt(%.2f) = %.2f\n", x, sqrt(x));

    // Test pow function
    double y = 3.0;
    printf("pow(%.2f, %.2f) = %.2f\n", x, y, pow(x, y));

    return 0;
}
