
#include <stdio.h>

// Function prototype
void print_message(const char* message);

int main() {
    const char* msg = "Hello, world!";
    
    // Call function using the prototype
    print_message(msg);
    
    return 0;
}

// Function definition
void print_message(const char* message) {
    printf("%s\n", message);
}
