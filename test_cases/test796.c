
#include <stdio.h>

int main() {
    int x = 0; // Initialize variable x to 0
    
    { // Start of compound statement
        printf("Start of compound statement\n");
        
        x = 10; // Set x to 10 inside the compound statement
        
        printf("Value of x is %d\n", x);
        
        int y = 20; // Declare and initialize variable y to 20 inside the compound statement
        
        printf("Value of y is %d\n", y);
    } // End of compound statement
    
    printf("End of compound statement\n");
    printf("Value of x after compound statement: %d\n", x);
    
    return 0; // Return from main function, ending the program.
}
