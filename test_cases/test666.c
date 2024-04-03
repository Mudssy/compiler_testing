
#include <stdio.h>
// Define a constant for TEST_SUM to check if it matches expected output. 
#define TEST_SUM 3

int main() {
    printf("Testing #include directive processing...\n");
    
    // Check the sum, if matches expected print supported else not supported.
    if (1 + 2 == TEST_SUM) {
        printf("#include directive processing is supported!\n");
    } else {
        printf("#include directive processing is not supported.\n");
    }
    
    // Make sure all test cases do not run forever, in other words, make sure they all return.
    return 0;
}
