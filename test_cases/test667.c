
#include <stdio.h>

// Test 1: Simple condition check
#ifdef DEBUG
    #define STRING "Debug build"
#else
    #define STRING "Release build"
#endif

int main() {
    printf("%s\n", STRING);
    return 0;
}
