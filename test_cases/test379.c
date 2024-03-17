
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int max = (a > b) ? a : b; // Using ternary operator to find the maximum of two numbers
    
    printf("Maximum between %d and %d is: %d\n", a, b, max);

    return 0;
}
