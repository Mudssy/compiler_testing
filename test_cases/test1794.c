
#include <stdio.h>

// Declare the types of the functions you want to use with function pointers
typedef void (*FuncPtr)(void);

// Define some functions that match the previously declared types
void Function1() { printf("Function 1\n"); }
void Function2() { printf("Function 2\n"); }

int main(void) {
    // Initialize function pointers and point them to specific functions
    FuncPtr funcPtrs[2];
    funcPtrs[0] = &Function1;
    funcPtrs[1] = &Function2;
    
    // Use the function pointer to call another function
    funcPtrs[0]();  // prints "Function 1"
    funcPtrs[1]();  // prints "Function 2"

    return 0;
}
