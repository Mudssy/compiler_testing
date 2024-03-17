
#include <stdio.h>

// Define a macro with an expression that is not known at compile time, i.e., it's not a compile-time constant.
#define NOT_COMPILE_TIME 2*3

int main() {
    // Print the result of the compiler evaluating NOT_COMPILE_TIME.
    printf("The value of NOT_COMPILE_TIME is: %d\n", NOT_COMPILE_TIME);
  
    return 0;
}
