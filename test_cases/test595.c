
#include <stdio.h>

// Function Declaration
int add(int a, int b);

// Main Function
int main() {
    int result = add(10, 20); // Calling the function with some test inputs
    printf("The result is: %d\n", result); // Prints out whether the function works as expected
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
