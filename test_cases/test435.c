
#include <stdio.h>
#include <assert.h>
#include <math.h>  // To use fabs() function

int main() {
    float a = 10.0f;
    float b = FLT_MIN;  // Smallest representable positive number for floats
    float result = a / b;  // Division operation
    
    printf("Expected output: %f, Actual Output: %f", a/b, result);
    
    return 0;
}
