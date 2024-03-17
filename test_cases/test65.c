
#include <stdio.h>
#include <assert.h>

int main() {
    int a = 10;
    int b = 20;
    
    // Test arithmetic operations.
    assert(a + b == 30);  // Addition
    assert(b - a == 10);  // Subtraction
    assert(a * b == 200);  // Multiplication
    assert(b / a == 2);   // Division
    assert(b % a == 0);   // Modulus
    
    printf("Test Passed\n");
    return 0;
}
