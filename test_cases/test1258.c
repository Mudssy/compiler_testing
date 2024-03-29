
#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;
    
    // Test case 1
    x = 2.0;
    n = 3;
    printf("ldexp(%f, %d) = %f\n", x, n, ldexp(x, n));
    
    // Test case 2
    x = -5.678;
    n = 10;
    printf("ldexp(%f, %d) = %f\n", x, n, ldexp(x, n));
    
    return 0;
}
