
#include <stdio.h>

int main() {
    int i = 10;
    float f = 2.5;
    
    // Perform implicit type conversion and addition
    float result = i + f;

    printf("The result of integer %d and float %f added together is: %f\n", i, f, result);

    return 0;
}
