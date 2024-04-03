
#include <stdio.h>

// Define a type for a function pointer.
typedef void (*func_ptr)(void);

// Declare two functions that we will use as function pointers.
void print1(void) { printf("Hello, "); }
void print2(void) { printf("World!\n"); }

int main() 
{
    // Create an array of function pointers.
    func_ptr funcs[2] = {print1, print2};
  
    int i;
    for (i = 0; i < 2; ++i) 
    {
        // Call each function using the corresponding element in the array.
        (*funcs[i])();
    }

    return 0; 
}
