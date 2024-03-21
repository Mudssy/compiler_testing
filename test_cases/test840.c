
#include <stdio.h>

// Inline Function Definition
static inline int my_inline_function(int x) {
    return x * x;
}

// Main Function
int main() {
    // Calling the Inline Function & Printing its Output
    printf("The square of 5 is: %d\n", my_inline_function(5));
    return 0;
}
