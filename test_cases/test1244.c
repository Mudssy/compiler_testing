
#include <stdio.h>
#include <stdlib.h>

int main() {
    ldiv_t result;
    long int numerator = 10l, denominator = 3l;
    
    // Use the ldiv function to divide two numbers and store the result in a struct
    result = ldiv(numerator, denominator);
    
    if (result.rem == 1) {
        printf("The division of %ld by %ld gives quotient: %ld and remainder: 1\n", numerator, denominator, result.quot);
    } else {
        fprintf(stderr, "Error: Remainder is not 1 as expected.\n");
        return EXIT_FAILURE; // Program terminates here with a failure code
    }
    
    return EXIT_SUCCESS;
}
