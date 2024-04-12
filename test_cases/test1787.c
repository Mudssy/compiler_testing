
#include <stdio.h>

int main() {
    int dividend = 10;
    int divisor = 0; // This will cause division by zero error
    
    if (divisor != 0) {
        printf("The result of the division is %d\n", dividend / divisor);
    } else {
        printf("Cannot divide by zero! Exiting...\n");
    }

    return 0; // Make sure that the program always returns
}
