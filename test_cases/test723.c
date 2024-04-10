
#include <stdlib.h>    // For exit function

// Declare function prototype
void foo(); 

int main() {
    foo();   // Call a function that's expected to be undefined (stub)

    return 0;  // Make sure the program doesn't run forever
}

__attribute__((weak)) void foo() {
    exit(1);
}
