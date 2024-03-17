
#include <stdio.h>

// Function Declaration for testing libIndex
void foo(int);

// Main function
int main() {
    // Call the function which is declared above
    foo(10);
    
    return 0;
}

// Function Definition
void foo(int x) {
    printf("Function Declaration Indexing with libIndex Test: %d\n", x);
}
