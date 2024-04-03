
#include <stdio.h>
#include <assert.h>
#include <math.h>  // To use fabs() function

int main() {
    float a = 10.0f;
    float b = 0.0f;
    assert(a != 0.0f);  // Check if the divisor is not zero
    
    float result = a / b;
    const float epsilon = 0.0001f;  // Tolerance for floating point comparison
    assert(!isnan(result));  // Ensure the result is not NaN (Not a Number)

    if (!(fabs(result - 10.0f) <= epsilon)) {
        printf("Result is incorrect");
        return 1;
    } else {
        printf("The test case passed\n");
        printf("Expected output: %f, Actual Output: %f", a/b, result);
    }
    
    return 0;
}
