
#include <stdio.h>

int main() {
    int x = 10; // initializes x with 10

    printf("Value of x before block placement: %d\n", x); // prints the value of x before block placement
    
    {
        int x = 20; // a new variable 'x' is created in this new block
        
        printf("Value of x after block placement: %d\n", x); // prints the value of x after block placement
    }

    printf("Value of x outside the block: %d\n", x); // prints the value of x again, which is from previous scope
    
    return 0;
}
