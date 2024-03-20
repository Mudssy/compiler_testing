
#include <stdio.h>

int global_var = 10; // this is a global variable with external linkage
static int file_scope_var = 20; // this is a static variable with internal linkage

void function() {
    int function_scope_var = 30; // this is a local variable with no linkage
}

int main() {
    int *ptr = &global_var; // the global variable should be accessible here
    printf("Global Variable: %d\n", *ptr);

    ptr = &file_scope_var; // the static variable should also be accessible here
    printf("File Scope Variable: %d\n", *ptr);

    function(); // calling this function makes the local variable accessible
    ptr = &function_scope_var;
    printf("Function Scope Variable: %d\n", *ptr); 
    
    return 0;
}
