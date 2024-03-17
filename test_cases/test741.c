
#include <stdio.h>

// Declare deprecated function
int add_numbers(int a, int b) __attribute__((deprecated));

// Deprecated function definition
int add_numbers(int a, int b) {
    return a + b;
}

// New function that should be used instead of the deprecated function
int add_numbers_new(int a, int b) {
    return a + b;
}

int main() {
    int result = add_numbers(5, 3);
    printf("Result of add_numbers: %d\n", result);

    int new_result = add_numbers_new(5, 3);
    printf("Result of add_numbers_new: %d\n", new_result);

    return 0;
}
