
#include <stdio.h>

int global_var = 10; // this is a global variable with external linkage
static int file_scope_var = 20; // this is a static variable with internal linkage

void function() {
    static int function_scope_var = 30; //this is a local variable with no linkage 
}

int main() {
    int *ptr = &global_var; 
    
    printf("Value of global_var: %d\n", *ptr); 
    
    return 0;
}
