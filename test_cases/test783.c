
#include <stdio.h>

void print_message(char *msg) {
    printf("%s\n", msg);
}

int main() {
    void (*fptr)(char*);
    
    fptr = &print_message; // Assign the address of function to function pointer
    (*fptr)("Hello from Function Pointer"); // Call the function via function pointer

    return 0; // Make sure it returns, not running forever.
}
