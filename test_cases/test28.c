
#include <stdio.h>

// Forward declaration
void print_message();

int main() {
    // Use the forward declared function
    print_message();
    
    return 0;
}

// Implementing the forward declared function
void print_message() {
    printf("Compiler supports handling of forward declarations for the llvmlibDebugInfo section.\n");
}
