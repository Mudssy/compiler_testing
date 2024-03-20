
#include <stdio.h>

// Declare prototype for a function pointer
int (*add)(int x, int y);

// Define a function that will be assigned to the function pointer
int add_func(int x, int y) {
    return x + y;
}

int main() {
    // Assign the function to the function pointer
    add = &add_func;
    
    // Use the function through its pointer
    printf("%d\n", (*add)(2, 3)); // Outputs: 5

    return 0;
}
