
#include <stdio.h>

// Define a simple variadic macro
#define TEST_MACRO(...) printf(__VA_ARGS__)

int main() {
    // Test the macro with no arguments
    TEST_MACRO("No argument test\n");

    // Test the macro with one argument
    TEST_MACRO("One argument test: %d\n", 10);

    // Test the macro with two arguments
    TEST_MACRO("Two arguments test: %d, %f\n", 20, 3.5);
    
    return 0;
}
