
#include <stdio.h>

#define MULTIPLY(a, b) ((a) * (b))
#define CUBE(x) ((x) * (x) * (x))

int main() {
    int a = 5;
    int b = 3;

    printf("Multiply macro: %d\n", MULTIPLY(a, b));
    printf("Cube macro: %d\n", CUBE(a));

    return 0;
}
