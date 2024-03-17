
#include <stdio.h>

typedef void (*FunctionPointer)(void);

// Function that prints "Hello"
static void hello(void) {
    printf("Hello\n");
}

// Function that prints "World"
static void world(void) {
    printf("World\n");
}

int main(void) {
    // Create an array of function pointers
    FunctionPointer funcs[] = {hello, world};
    
    // Execute each function in the array
    for (unsigned int i = 0; i < sizeof(funcs)/sizeof(FunctionPointer); ++i) {
        (*funcs[i])();
    }

    return 0;
}
