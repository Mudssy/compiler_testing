
#include <stdio.h>

int main() {
    #pragma STDC FP_CONTRACT ON
    
    float x = 10.5f;
    float y = 2.3f;
    double z = (double)x + y;
    
    printf("The value of z is: %.2lf\n", z);
    
    return 0;
}
