
#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;
    int x, y, z;

    x = (y = a + b) * b; // Potential breaking of assignment before operator
    z = y * b;

    printf("x: %d\n", x);
    printf("z: %d\n", z);

    return 0;
}
