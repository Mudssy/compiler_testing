
#include <stdio.h>

// Defines two new data types, my_int and my_float
typedef int my_int;
typedef float my_float;

// Function to add two integers 
my_int add(my_int a, my_int b) {
    return a + b;
}

// Function to subtract two floating point numbers
my_float sub(my_float a, my_float b) {
    return a - b;
}

int main() {
    // Test the add function with integers
    printf("1 + 2 = %d\n", add(1, 2));
    
    // Test the sub function with floating point numbers
    printf("3.5 - 2.2 = %f\n", sub(3.5, 2.2));
  
    return 0;
}
