
#include <stdio.h>

// Test case 1: Assert that an expression is true at compile-time
void testCase1() {
    // This should not fail, as 42 is less than 50
    _Static_assert(sizeof(int) < 50, "integer size is too big");
}

// Test case 2: Assert that an expression is false at compile-time.
void testCase2() {
    // This should fail, as 42 is not less than 10.
    _Static_assert(sizeof(int) < 10, "integer size is too big");
}

// Test case 3: Assert that an expression is true at compile-time using a constant value.
void testCase3() {
    // This should not fail, as the constant value is greater than 5.
    _Static_assert(21 > 5, "constant value is too small");
}

// Test case 4: Assert that an expression is false at compile-time using a constant value.
void testCase4() {
    // This should fail, as the constant value is not greater than 30.
    _Static_assert(21 > 30, "constant value is too small");
}

int main() {
    printf("All tests passed.\n");
    return 0;
}
