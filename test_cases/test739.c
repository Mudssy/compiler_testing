
#include <stdio.h>

void __attribute__((cdecl)) foo() {
    printf("Hello from foo!\n");
}

int main() {
    void (*funPtr)();
    funPtr = &foo;
    funPtr();  // Calling the function through a function pointer.
    
    return 0;  // Program ends here, so it doesn't run forever.
}
