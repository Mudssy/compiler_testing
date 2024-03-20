
#include <stdio.h>

// Define the external function
void print_message(); // External declaration

int main(void) {
    print_message();
    return 0;
}

// Implementation of the external function
void print_message() {
    printf("Hello, world!\n");
}
