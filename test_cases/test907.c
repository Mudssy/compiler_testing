
#include <stdlib.h>

// The noreturn attribute
void exit_program() __attribute__((noreturn));

int main() {
    // A sample usage of the noreturn function
    exit_program();
    
    /* This point is never reached */
    printf("This will not be printed\n"); 
}

void exit_program() {
    printf("Exiting program...\n");
    exit(0); // The program exits without executing this line.
}
