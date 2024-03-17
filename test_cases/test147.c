
#include <stdio.h>

int var = 10; // Declare an integer variable 'var' with initial value 10
void *ptr = &var; // Store the address of 'var' into a void pointer 'ptr'

int main() {
    int *int_ptr = ptr; // Cast the void pointer back to an integer pointer 'int_ptr'
    printf("Value of var through int_ptr: %d\n", *int_ptr); 
    
    return 0;
}
