
#include <stdio.h>
#include <math.h>

int main() {
    double param, result;
    
    param = 30.0 * M_PI / 180.0;  // convert degrees to radians
    result = tan(param);
    
    printf("The tangent of %f is %f\n", param, result);
  
    return 0;
}
