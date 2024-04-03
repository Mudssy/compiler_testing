
#include <stdio.h>

void test(int i) {
    printf("Inside test: %d\n", i);
}

int main() {
    int i; // Block scope, not accessible outside the for loop
    
    for (i = 0; i < 10; i++) { // In this block scope, 'i' is only valid within this block.
        printf("Inside loop: %d\n", i);
        
        if (i == 5) {
            int j = i * 2; // A new block scope is started here with 'j'. It's not accessible outside of this if statement or for loop.
            printf("Inside if: %d\n", j);
            
            test(j); // The value of 'j' can be passed to a function, but the 'j' in this function is separate from the one in main().
        } 
    } 
    
    printf("Outside loop: %d\n", i); // But here we still have access to the 'i' declared in the for loop.
    
    return 0;
}
