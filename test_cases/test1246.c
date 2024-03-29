
#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 0.5; // value in range [-1, 1]
    double result = acos(x);
    
    printf("The arc cosine of %f is %f radians\n", x, result);
    
    return 0;
}
