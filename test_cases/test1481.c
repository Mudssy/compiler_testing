
#include <stdio.h>

int main(void) {
    int x = 10; // define variable x with value 10 in the outer block
    
    if(x > 5){ // start of inner block
        int y = x * 2; // redefine y within inner block
        printf("y is %d\n", y); // prints "y is 20"
    }

    { // another inner block
        int z = 7; // define variable z in this block
        printf("z is %d\n", z); // prints "z is 7"
    }
    
    return 0; // end of program, all blocks have finished
}
