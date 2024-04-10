
#include <stdio.h>
#include <math.h>

int main() {
    double x = 42;
    x = (x * M_PI) / 180; // convert to radians
    
    printf("sin(%f) = %f\n", x, sin(x));
    printf("cos(%f) = %f\n", x, cos(x));
    printf("sqrt(%f) = %f\n", x, sqrt(x));
    
    return 0;
}
