
#include <assert.h>
#include <stdio.h>

int main() {
    int x = 10;
    
    printf("Assertion Test\n");

    // Test 1: Assert that a condition is true, should pass.
    assert(x == 10);
    printf("Test 1 passed.\n");
    
    // Test 2: Assert that a condition is false, should fail and abort the program.
    assert(x != 10);
    // This line shouldn't be executed if the previous assertion fails.
    printf("Test 2 passed.\n");

    return 0;
}
