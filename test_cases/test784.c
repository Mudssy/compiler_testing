
#include <stdio.h>

const int constant_value = 10; // Define your const variable here.

int main() {
    if(constant_value == 10) // Check if the const value is still the same.
        printf("Passed\n"); // If it's the same, print "Passed".
    else
        printf("Failed\n"); // If it's not the same, print "Failed".
    
    return 0; // Make sure the program always returns.
}
