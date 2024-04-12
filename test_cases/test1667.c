
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    
    // Testing the conditional operator with two conditions
    printf("Test 1: %s\n", (a > 5) ? "Condition is true" : "Condition is false");
    printf("Test 2: %s\n", (b < 5) ? "Condition is true" : "Condition is false");
    
    // Testing the conditional operator with a constant expression as condition
    printf("Test 3: %d\n", (a > 10) ? a : b);
    
    return 0;
}
