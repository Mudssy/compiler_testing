
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "1234"; // input a string which contains a number
    int num;
    
    num = atoi(str);  
    
    if (num != 0) 
        printf("Success: String was converted to integer\n"); // should print this if the conversion is successful
    else 
        printf("Failure: Failed to convert string to integer\n"); // prints this if the conversion failed
        
    return 0; // makes sure that the program does not run forever
}
