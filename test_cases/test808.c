
#include <stdio.h>

// Define a macro with parameter
#define PRINT_OUTPUT(x) printf("Output: %d\n", x); \
    if (x > 0) { \
        printf("Positive number\n"); \
    } else if (x < 0) { \
        printf("Negative number\n"); \
    } else { \
        printf("Zero\n"); \
    }

int main(void) {
    // Test macro with positive, negative and zero numbers
    PRINT_OUTPUT(5);
    PRINT_OUTPUT(-3);
    PRINT_OUTPUT(0);
    
    return 0;  // Return statement to ensure the program exits
}
