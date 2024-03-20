
// Include necessary headers
#include <stdio.h>

int global_var; // Declaration of variable
int function();  // Function prototype/declaration

int main() {
    printf("Hello, world!\n");
    
    // Testing if variables and functions can be declared without defining them beforehand
    int local_var = 10;
    int result = function();

    printf("Local variable: %d\n", local_var);
    printf("Function result: %d\n", result);
    
    return 0; // Return statement from main function
}

// Function definition
int function() {
    return 15;
}
