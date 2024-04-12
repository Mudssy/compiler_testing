
#include <stdio.h>

// Inline function defined in C99 with static keyword, 
inline static int add(int a, int b) { return a + b; }

int main() {
    // Call to inline function
    int result = add(5, 10);
    
    printf("The sum of 5 and 10 is: %d\n", result);
    
    return 0;  // Make sure the test case returns
}
