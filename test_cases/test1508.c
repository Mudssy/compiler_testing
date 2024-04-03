
#include <stdio.h>

int main() {
    int x = 10;  // Global scope
    
    if (x == 10) {
        int x = 20;  // Local scope within if-statement
        
        printf("The value of local variable 'x' is %d\n", x);  
    }
    
    printf("The value of global variable 'x' is %d\n", x); 
    
    return 0;
}
