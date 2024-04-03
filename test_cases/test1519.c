
#include <stdio.h>

// File scope variable declaration without explicit initializer
int x; // External linkage (external)

void foo() {
    // Function scope variable declaration with explicit initializer
    int y = 10; // Internal linkage (internal)
}

void bar(); // Forward function declaration is also an external declaration.

int main() {
    printf("Value of x: %d\n", x);
    
    foo();  // It's not defined so it should result in a compile-time error
    
    bar();  // It's not defined so it should result in a compile-time error
    
    return 0;
}
