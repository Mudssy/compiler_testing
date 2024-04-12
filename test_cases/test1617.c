
#include <stdio.h>

int main() {
    int x = 10; // integer value
    
    float y = (float)x; // conversion from integer to float
    double z = (double)y; // conversion from float to double 

    printf("Integer Value: %d\nFloat Value: %f\nDouble Value: %lf\n", x, y, z);

    return 0; // always return something
}
