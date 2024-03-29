
#include <stdio.h>
#include <stdlib.h>  // stdlib header file for exit() function

int main(void) 
{
    printf("This is printed before calling exit.\n");
    
    exit(EXIT_SUCCESS);  // exit program with success status
    
    printf("This will never be executed because of the previous call to 'exit'.\n");
    
    return 0;  // this line won't execute as the previous line causes the program to exit
}
