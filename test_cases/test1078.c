
#include <stdio.h>

// Function to add two integers
int add_int(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add_double(double a, double b) {
    return a + b;
}

int main() {
    // Use the integer adder
    int result = add_int(5, 7);
    printf("The result is: %d\n", result);
    
    // Use the double adder
    double result_double = add_double(5.2, 7.3);
    printf("The result is: %f\n", result_double);
    
    return 0;
}
