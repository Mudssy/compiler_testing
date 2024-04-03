
#include <stdio.h>

// Declaration of a global variable with external linkage (can be accessed from anywhere)
extern int ext_var = 10; // Initialized the global variable

// Definition of a static function with internal linkage (only accessible in this file)
static void printInternal() {
    printf("This is an Internal Linkage function\n");
}

int main(){
    
    // Declaration and definition of a local variable 
    int var = 10;  
    
    // External linkage: can be accessed from anywhere
    extern int ext_var; 
    
    // Use of the global variable
    printf("Global Variable : %d\n", ext_var); 
    
    // Local use of the local variable
    printf("Local Variable : %d\n", var);  
    
    // Call to the Internal Linkage function
    printInternal(); 
    
    return 0;
}
