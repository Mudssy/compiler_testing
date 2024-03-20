
#include <stdio.h>

// Global variables declaration
int x;
static int y;
extern int z; // Assume this is defined somewhere else

void print_values() {
    printf("Global values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
}

int main() {
    // Initialize global variables
    x = 10;
    y = 20;
    z = 30;
    
    print_values();

    return 0; // Make sure the program returns at some point.
}
