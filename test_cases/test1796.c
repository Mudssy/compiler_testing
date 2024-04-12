
#include <stdio.h>

int main() {
    int numerator = 10;
    int denominator = 0; // This could be any expression that can evaluate to 0 at runtime
    
    if(denominator != 0) {
        printf("The result is: %d\n", numerator / denominator);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    
    return 0; // Make sure the program returns
}
