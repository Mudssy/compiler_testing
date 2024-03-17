
#include <stdio.h>

void print_hello() {
    printf("Hello, World!\n");
}

int main(void) {
    void (*functionPointer)(void);
    functionPointer = &print_hello;
    
    // The debug info should be visible here when the compiler generates it for function pointers.
    functionPointer();
    
    return 0;
}
