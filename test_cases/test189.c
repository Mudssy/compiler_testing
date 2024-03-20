
#include <stdio.h>

int main() {
    extern __inline int var1; // Declare inline variable var1
    
    printf("Value of var1: %d\n", var1); // Print the value of var1
    
    return 0; // Ends program and returns 0 to indicate it ran successfully
}
