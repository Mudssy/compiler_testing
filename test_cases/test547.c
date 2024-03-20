
#include <stdio.h>

int main(void) {
    // Define some variables to use in our code
    int i = 5;
    int j = 10;
    int sum = i + j;
    
    if (sum > 15) {
        printf("Sum is greater than 15\n");
    } else {
        // This branch should be unreachable, but we can use the builtin compiler function to make sure it's unreachable
        __builtin_unreachable();
        printf("This will never execute\n");
    }
    
    return 0;
}
