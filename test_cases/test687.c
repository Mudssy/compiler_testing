
#include <stdio.h>

// Declare a function pointer type for functions that take a const char* and return void
typedef void (*greet_func)(const char *);

void greet(const char *name) { printf("Hello, %s!\n", name); }

int main() {
    // Create a function pointer and assign the address of greet to it
    greet_func greetPointer = &greet;
    
    // Call the function through the function pointer
    (*greetPointer)("John Doe");  // Outputs: Hello, John Doe!
}
