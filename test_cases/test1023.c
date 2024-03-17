
#include <stdio.h>

#define CONCAT(a, b) a ## b
#define EXPAND_CONCAT(a, b) CONCAT(a, b)

#define VARIABLE_NAME_EXPANSION_TEST EXPAND_CONCAT(testVar_, __LINE__)

int main() {
    int VARIABLE_NAME_EXPANSION_TEST = 42;

    printf("The value of the variable with expanded name is: %d\n", VARIABLE_NAME_EXPANSION_TEST);

    return 0;
}
