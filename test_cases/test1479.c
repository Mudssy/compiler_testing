
#include <stdio.h>

// Testing external variable initialization 
int global_var = 10; // External Variable initialized 
static int static_global_var = 20; // Static variable is declared and initialized

void func() {
    printf("Inside the function: ");
}

int main(){
    
    /* Checking external variable */
    printf("External Variable value before function call: %d\n", global_var); 
    func(); // Calling the function to print message inside it
    printf("%d\n", global_var); 
    
    /* Checking static variables*/
    printf("Static Variable value: %d\n", static_global_var);  
    
    return 0; // Return from main function
}
