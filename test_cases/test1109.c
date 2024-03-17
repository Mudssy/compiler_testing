
#include <stdio.h>

int main() {
    int x = 10;
    
    printf("Initial value of x: %d\n", x);
    
    ++x; // increment operator test
    printf("Value of x after pre-increment: %d\n", x);
    
    x--; // decrement operator test
    printf("Value of x after post-decrement: %d\n", x);
    
    --x; // decrement operator test
    printf("Value of x after pre-decrement: %d\n", x);
    
    x++; // increment operator test
    printf("Value of x after post-increment: %d\n", x);
    
    return 0;
}
