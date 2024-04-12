
#include <stdio.h>

// Define an inline function to be used as a test case
inline void foo() {
    printf("Inline function called!\n");
}

int main(void) {
    // Call the inline function
    foo();
    
    return 0;
}
