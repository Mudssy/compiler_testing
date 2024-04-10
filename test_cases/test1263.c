
#include <stdio.h>
#include <math.h>

int main() {
    double x = 0;
    
    while (x <= 2 * M_PI) {
        printf("sin(%f) = %f\n", x, sin(x));
        x += M_PI / 4;
    }
    
    return 0;
}
