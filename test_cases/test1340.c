
#include <stdio.h>

int main() {
    int x; // Uninitialized variable, will generate a warning when compiling with gcc
    
    printf("%d\n", x); // Try to print the value of x that hasn't been initialized yet

    return 0;
}
