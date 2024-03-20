
#include <stdio.h>
#include <Block.h> // Block_copy(), Block_release()

int main(void) {
    int var = 42; // variable to be captured by the block
    
    void (^myBlock)(void) = ^{
        printf("Value of var inside the block: %d\n", var);
    };
    
    printf("Value of var before calling the block: %d\n", var);
    myBlock(); // call the block
    printf("Value of var after calling the block: %d\n", var);
  
    return 0;
}
