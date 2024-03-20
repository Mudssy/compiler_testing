
#include <stdio.h>

// Macro definition
#define MAX(a, b) ((a > b) ? a : b)

int main() {
    int x = 10;
    int y = 20;

    printf("Max between %d and %d is: %d\n", x, y, MAX(x, y));  // Using macro function

    return 0;  // Return statement to avoid infinite looping.
}
