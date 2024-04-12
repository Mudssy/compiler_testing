
#include <stdio.h>

// Variadic Macro Example
#define print(...) printf(__VA_ARGS__)

int main() {
    // Test case 1
    print("Test Case 1: %d\n", 1);

    // Test case 2
    int x = 5;
    print("Test Case 2: %d\n", x);
    
    return 0;
}
