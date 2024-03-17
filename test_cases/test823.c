
#include <stdio.h>

// Declare global variable in file scope
static int global_var = 10;

int main() {
    // Print the value of the file scoped global variable
    printf("Value of global variable in file scope: %d\n", global_var);
    
    return 0;
}
