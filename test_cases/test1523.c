
#include <stdio.h>

// Declare and define your external inline function
static extern inline void print_message(void) {
    printf("Hello, World!\n");
}

int main(void) {
    // Call the inline function from within the main function
    print_message();
    return 0;
}
