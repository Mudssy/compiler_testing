
#include <stdio.h>

// Macro definition
#define ADD(x, y) ((x) + (y))

// Function-like macro
#define MULTIPLY(x, y) ((x) * (y))

int main() {
    // Testing the ADD macro
    int sum = ADD(5, 10);
    printf("Sum: %d\n", sum);

    // Testing the MULTIPLY macro
    int product = MULTIPLY(3, 4);
    printf("Product: %d\n", product);
    
    return 0;
}
