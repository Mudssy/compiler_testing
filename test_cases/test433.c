
#include <stdio.h>

// Test static linkage
static int foo(int x) {
    return x * x; // Just for testing purposes. Replace with actual code.
}

int main() {
    printf("Testing static linkage: %d\n", foo(10));

    return 0; // Ensures that the program returns and does not run forever.
}
