
#include <stdio.h>

int add(int a, int b) {
    int result;
    result = a + b;
    return result;
}

int main() {
    int x, y, z;
    x = 5;
    y = 3;
    z = add(x, y);
    printf("The sum of %d and %d is: %d\n", x, y, z);
    return 0;
}
