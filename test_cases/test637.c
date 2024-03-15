
#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define PRINT_SQUARE(x) printf("The square of %d is: %d\n", x, SQUARE(x))

int main() {
    int num = 5;
    PRINT_SQUARE(num);
    return 0;
}
