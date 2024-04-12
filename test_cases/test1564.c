
#include <stdio.h>

int main() {
    printf("%d\n", 5 * (3 + 2)); // Constant expression: should be optimized by the compiler
    return 0; // The program always returns 0 and terminates, thus it doesn't run forever in theory
}
