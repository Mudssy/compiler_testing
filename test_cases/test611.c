
#include <stdio.h>

void foo() {
    printf("Hello from foo!\n");
}

int main() {
    void (*ptr)() = &foo; // A valid function pointer initialization.
    ptr(); // Calls the function via the function pointer.
    
    return 0;
}
