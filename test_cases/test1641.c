
#include <stdio.h>

// This is a preprocessor constant that we define only if it hasn't been defined before
#ifndef TEST_CONSTANT
    #define TEST_CONSTANT 12345
#endif // TEST_CONSTANT

int main() {
    printf("Value of TEST_CONSTANT is: %d\n", TEST_CONSTANT);
    return 0;
}
