
#include <stdio.h>

// Let's say we want to test this header file
#include "test_header.h"

int main() {
    // Test the function defined in test_header.h
    int result = testFunction();
    
    // Print out the result
    printf("The result is: %d\n", result);
    
    return 0;
}
