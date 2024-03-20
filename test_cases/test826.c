
#include <stdio.h>

// Declaration of a global variable with external linkage (can be accessed from anywhere)
extern int ext_var;

// Definition of a static function with internal linkage (only accessible in this file)
static void printInternal() {
    printf("This is an Internal Linkage function\n");
}

int main(){
    
    // Declaration and definition of a local variable 
    int var = 10;  
    
    // External linkage: Accessing the global variable from another file or function
    printf("External Linkage Variable: %d\n", ext_var);
    
    // Internal linkage: Calling a static function within the same source file.
    printInternal();

    return 0;
}
