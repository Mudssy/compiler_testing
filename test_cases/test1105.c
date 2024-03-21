
#include <stdio.h>

int main() {
    goto print_hello_world; // Jump to the label below
    
    return 0;

print_hello_world: // This is a label
    printf("Hello, world!\n"); // Prints "Hello, world!"
    
    return 0;
}
