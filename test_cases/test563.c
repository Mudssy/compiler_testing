
#include <stdio.h>
#include <float.h>

int main() {
    printf("Limits for float: \n");
    printf("Max: %E\n", FLT_MAX);
    printf("Min: %E\n", FLT_MIN);
    printf("Epsilon: %E\n", FLT_EPSILON);
    
    printf("\nLimits for double: \n");
    printf("Max: %E\n", DBL_MAX);
    printf("Min: %E\n", DBL_MIN);
    printf("Epsilon: %E\n", DBL_EPSILON);
    
    return 0;
}
