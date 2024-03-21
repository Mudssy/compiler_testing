
#include <stdio.h>

int main() {
    int x = 1; // This variable has local scope to main function
    
    if(x) {
        int y = 2;  // This variable also has local scope within the if-block
        
        printf("Value of y: %d\n", y);  // This will print '2'
    }
    
    printf("Value of x: %d\n", x);  // This will print '1'
    
    return 0;  // Returning from main function. No infinite loops here.
}
