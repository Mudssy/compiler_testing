
#include <stdio.h>

// Function Declaration
int add(int a, int b);

int main() {
    // Calling the function
    int result = add(5, 10);
    
    printf("The sum of 5 and 10 is %d\n", result);

    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
