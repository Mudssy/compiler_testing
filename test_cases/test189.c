
#include <stdio.h>

// Inline function with return type int
__inline__ int add(int x, int y) { 
    return (x + y);
}

// Inline variable with int datatype
__inline__ int var = 10;

int main() {
    // Calling inline function and printing the result
    printf("Sum is: %d\n", add(5, 7));
    
    // Printing the value of inline variable
    printf("Inline variable's value is: %d\n", var);
    
    return 0;
}
