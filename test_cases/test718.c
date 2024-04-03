
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
    // Local variable definition
    int a = 10;
    static int b = 20;
    
    print_values();

    return 0;
}
