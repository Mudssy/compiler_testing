
#include <stdio.h>

int main(void) {
    int x = 1; // local variable to main function
    
    if (x == 1) {
        printf("Inside the outer scope\n");
        
        int y = 2; // local variable to inner block
        
        if (y == 2) {
            printf("Inside the inner scope\n");
        } else {
            printf("This should not be printed\n");
        }
    } else {
        printf("This should not be printed\n");
    }
    
    return 0; // program ends normally
}
