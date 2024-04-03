
#include <assert.h>
#include <stdio.h>

int main() {
    int x = 10;
    
    printf("Assertion Test 1\n");
    assert(x == 5); // This will fail because 10 is not equal to 5
    printf("Test 1 Failed\n\n"); // Assertions are disabled, this won't be executed

    printf("Assertion Test 2\n");
    assert(x > 3); // This will pass because 10 is greater than 3
    printf("Test 2 Passed\n\n"); // Assertions are disabled, this won't be executed

    return 0;
}
