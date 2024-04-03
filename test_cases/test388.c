
#include <stdio.h>

static int add_numbers(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    int y = 20;
    printf("The sum of %d and %d is: %d\n", x, y, add_numbers(x, y));
    return 0;
}
