
#include <stdio.h>

// Deprecated function declaration
__attribute__((deprecated)) void old_function() {
    printf("This is the old function.\n");
}

// New function declaration
void new_function() {
    printf("This is the new function.\n");
}

int main() {
    // Call deprecated function
    old_function();

    // Call new function
    new_function();

    return 0;
}
