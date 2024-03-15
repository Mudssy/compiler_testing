
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int result = 3 * x + y / 2 - (x > y ? x : y);

    printf("The result is: %d\n", result);

    return 0;
}
