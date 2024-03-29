
#include <stdio.h>
#include <math.h>

int main() {
    double x = 5.0;
    double y = 2.0;
    double result = fmod(x, y);
    
    printf("The modulus of %f by %f is: %f\n", x, y, result);

    return 0;
}
