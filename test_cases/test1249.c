
#include <math.h>
#include <stdio.h>

int main() {
    double x = 10.0;
    double y = 25.0;
    
    printf("atan2(%f, %f) = %f\n", x, y, atan2(y,x));
    
    return 0;
}
