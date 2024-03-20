
#include <stdio.h>

// Function definition with "always inline" attribute 
static __attribute__((always_inline)) int add(int a, int b) { return a + b; }

int main() {
    int result = add(5, 10); // Call to the function with some test data
    printf("The result is: %d\n", result);
    return 0;
}
