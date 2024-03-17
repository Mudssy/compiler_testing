
#include <stdio.h>

int main(void) {
    int x = 10;
    ^{ // Block type attribute starts here
        int y = x + 5; // Capturing the reference of `x` in block scope
        printf("Value of y: %d\n", y);
        ^{ // Nested block
            int z = y * 2; // Reference capturing also works with nested blocks
            printf("Value of z: %d\n", z);
        }(); // Execute the nested block immediately
    }(); // Execute the block immediately
    
    return 0;
}
