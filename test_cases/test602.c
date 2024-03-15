
#include <stdio.h>

// Declare function with default arguments using variadic macros (C99)
#define PRINT_SUM(...) print_sum(__VA_ARGS__, 0) // Default value for third argument is 0

// Function to calculate and print sum of three numbers with default arguments
void print_sum(int a, int b, int c) {
    printf("The sum of %d, %d, and %d is: %d\n", a, b, c, a + b + c);
}

int main() {
    int num1 = 5;
    int num2 = 10;
    
    // Call function with two arguments (third argument will be default value of 0)
    PRINT_SUM(num1, num2);

    return 0;
}
