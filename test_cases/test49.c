
#include <stdio.h>

// Global Variable Declaration
int g = 20;

void add(int a, int b) {
    // Local Variable Declaration
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    printf("Global variable: %d\n", g);
    add(10, 20);
    return 0;
}
