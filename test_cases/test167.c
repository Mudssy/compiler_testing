
#include <stdio.h>

#define VALUE 5
#define SQUARE(x) ((x)*(x))

int main() {
    int a = 10;
    int b = 2 * VALUE + 3;
    int c = SQUARE(4);
    printf("The output is: %d, %d, %d\n", a, b, c);
    return 0;
}
