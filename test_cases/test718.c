
#include <stdio.h>

// Global variables declaration
int x = 5; // Assign a value to avoid garbage output of uninitialized variable
static int y = 10; 
extern int z; // Assume this is defined somewhere else and assign a value

void print_values() {
    printf("Global values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z); // Assume that 'extern int z' is defined somewhere else
}

int main() {
    print_values();
    return 0;
}
