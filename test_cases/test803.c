
#include <stdio.h>

// Function Definition
int add(int a, int b) {
    return a + b;
}

int main() {
    // Test cases
    printf("%d\n", add(3, 4));   // Output: 7
    printf("%d\n", add(-1, 1));  // Output: 0
    printf("%d\n", add(0, 0));   // Output: 0
    
    return 0;  // Exit successfully
}
