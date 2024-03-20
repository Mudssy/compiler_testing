
#include <stdio.h>

// Define an inline function foo()
inline void foo() {
    printf("Hello from inline function\n");
}

int main(void) {
    // Call the inline function
    foo();

    return 0;
}
