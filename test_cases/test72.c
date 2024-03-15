
#include <stdio.h>

int main() {
    int num1 = 24;
    float num2 = 7.4;
    double result;

    result = num1 + num2; // Implicit type conversion happens here
    
    printf("Result: %f\n", result);

    return 0;
}
