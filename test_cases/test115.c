
#include <stdio.h>

int main() {
    int x = 10;
    
    printf("Original value of x is %d\n", x);
    
    if(1) {
        // Here, we declare a new variable 'x' in the inner scope with a different value.
        // This concept is called "shadowing". 
        int x = 20;  
        
        printf("Value of x after shadowing in the inner block is %d\n", x);
    }
    
    printf("Value of x after the inner block, i.e., its outer value is %d\n", x);
    
    return 0;
}
