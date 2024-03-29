
#include <stdio.h>
#include <stdlib.h>  // For atof

int main() {
    char str[] = "2030300.0";  // Input string to be converted
    float val;                 // Variable to hold the converted value
    
    val = atof(str);           // Convert string to double
    printf("Value: %f\n", val);// Print the converted value
    
    return 0;                   // End of program with successful execution
}
