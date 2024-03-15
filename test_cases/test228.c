
#include <stdio.h>

#define PRINT_SUM(a, b) printf("The sum of %d and %d is: %d\n", a, b, a + b);

int main() {
    int x = 5;
    int y = 10;

    PRINT_SUM(x, y)

    return 0;
}
