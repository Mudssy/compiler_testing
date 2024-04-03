
#include <stdio.h>

// Inline function example
inline void hello() {
    printf("Hello, world!\n");
}

int main() {
    hello();  // This will be expanded in-line without a call.
    return 0; // Making sure the program does not run forever by returning.
}
