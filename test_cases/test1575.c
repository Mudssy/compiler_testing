
#include <stdio.h>

int main() {
    printf("This is a test.\n"); // This line should be optimized away by the compiler.
    return 0; // Returning from here should not get optimized out too, because it's part of the program flow.
}
