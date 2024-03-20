
#include <stdlib.h>
#include <stdio.h>

_Noreturn void my_function(void) {
    printf("Exiting the program\n");
    exit(0); // This is required to avoid compiler warnings about missing return statement
}

int main() {
    puts("Entering main function.");
    
    my_function();
    
    /* If _Noreturn is working properly, this line will not execute */
    printf("This line should not be printed.\n"); 
    
    return 0; // This statement will never be reached due to the exit() call in my_function
}
