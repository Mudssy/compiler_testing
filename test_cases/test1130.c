
#include <stdio.h>

// Using the _Generic keyword to choose the appropriate function based on the type of expression
void print_generic(int x) { printf("It's an integer\n"); }
void print_generic(double x) { printf("It's a float\n"); }

#define print_generic(X) _Generic((X), int: print_generic, double: print_generic)(X)

int main() {
    print_generic(5);       // Output: It's an integer
    print_generic(5.0f);    // Output: It's a float
    return 0;
}
