
#include <stdio.h>

// Forward declaration of foo from another file (foo.c)
extern int foo(int);

int main() {
    // Test static linkage
    printf("Testing static linkage: %d\n", foo(10));

    // Test dynamic linkage
    #pragma clang diagnostic push 
    #pragma clang diagnostic ignored "-Wunused-function"
    int (*dynamic_foo)(int) = &foo;
    printf("Testing dynamic linkage: %d\n", (*dynamic_foo)(10));
    #pragma clang diagnostic pop

    return 0; // Ensures that the program returns and does not run forever
}
