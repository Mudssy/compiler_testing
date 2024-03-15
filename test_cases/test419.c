
#include <stdio.h>

int main() {
    const int constant = 42;
    int variable = 10;

    printf("Initial value of variable: %d\n", variable);

    // Attempt to modify the constant variable, which should cause a compilation error due to type qualifiers
    // This test is to check if the compiler correctly identifies constants and enforces immutability.
    // If this compiles successfully or produces an incorrect output, it indicates a failure in the type qualifiers feature of the compiler.
    constant = 5;

    printf("Updated value of variable: %d\n", variable);

    return 0;
}
