
#include <stdio.h>

void (*fptr)();

void function() {
    printf("Hello from the function!\n");
}

int main() {
    fptr = &function; // Indirect call
    fptr(); // Call through pointer, should be profiled
    
    return 0; // Make sure it returns to end the program and avoid infinite loop
}
