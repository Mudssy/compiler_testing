
#include <stdio.h>

// This function will be inlined/outlined based on the compiler's settings and optimization level.
static inline void print_message() { printf("Hello, World!\n"); }

int main() {
    // Call the function multiple times to demonstrate that it can indeed get inlined or outlined.
    for(int i = 0; i < 5; ++i) {
        print_message();
    }
    return 0;
}
