
#include <stdio.h>
#include <assert.h>

int main() {
    // Test basic addition, subtraction, multiplication and division
    float a = 2.0f;
    assert(a + 3.0f == 5.0f);
    assert(a - 1.0f == 1.0f);
    assert(a * 4.0f == 8.0f);
    assert(a / 2.0f == 1.0f);

    // Test precision for very small numbers
    float b = 1e-5f;
    assert((b + 1e-6f) - b == 1e-6f);

    // Test division by zero (results in NaN, no assertion needed)
    a = 0.0f;
    printf("%f\n", a / 0.0f);

    return 0;
}
