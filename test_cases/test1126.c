
#include <stdio.h>

// This inline function prints hello
static inline void print_hello(void) {
    printf("Hello, World!\n");
}

int main() {
    // Calling the inline function
    print_hello();
    
    return 0;
}
