
#include <stdio.h>

inline void foo() {
    printf("Inline function\n");
}

int main() {
    inline int bar = 10; // Testing inline variable
    printf("%d\n", bar); // Expected output: 10
    foo();                // Expected output: "Inline function"
    return 0;             // End of program and return control to the system.
}
