
#include <stdio.h>

// Include a file named "test.inc"
#include "test.inc"

int main() {
    printf("Testing #include directive processing...\n");
    
    // Expected output based on the feature
    if (1 + 2 == TEST_SUM) {
        printf("#include directive processing is supported!\n");
    } else {
        printf("#include directive processing is not supported.\n");
    }
    
    return 0; // Make sure all test cases do not run forever, in other words, make sure they all return.
}
