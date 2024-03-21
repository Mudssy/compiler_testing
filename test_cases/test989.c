
#include <stdio.h>

int main() {
    int x = 0;
    
    // Test case 1: Checking if the compiler can handle simple loops
    for(int i=0; i<1000000000; i++) {
        x++;
    }
    printf("Test Case 1: x = %d\n", x); // If block frequencies are correctly estimated, the output should be "x = 1000000000"
    
    // Test case 2: Checking if the compiler can handle conditional branches
    int y = 0;
    for(int i=0; i<1000000000; i++) {
        if (i < 500000000) y--;
        else y++;
    }
    printf("Test Case 2: y = %d\n", y); // The output should be "y = 1" (or "-1") since we're alternating between incrementing and decrementing the variable in the loop.
    
    return 0;
}
