
#include <stdio.h>

int main() {
    int x = 10; // Initialize variable x with value 10
    
    printf("Before block: %d\n", x); // Print the value of x before the block

    {
        int y = x + 5; // This is a compound statement (block) as well. 
                        // We are initializing variable y inside this block with the value (x + 5).
        
        printf("Inside block: %d\n", y); // Print the value of y after initialization within the block
    }

    printf("After block: %d\n", x); // The value of x remains unchanged even though we initialized and used y inside a block. 
                                    // This is proof that blocks are functioning correctly.
    
    return 0;
}
