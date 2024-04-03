
#include <stdio.h>

int main() {
    int x = 5;  // Change this value for different outcomes
    
    /* Static assert checks if the condition is true at compile time */
    _Static_assert(x > 0, "Value of x must be greater than zero");
    
    printf("The value of x is: %d\n", x);
  
    return 0;
}
