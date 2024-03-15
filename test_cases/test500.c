
#include <stdio.h>

int main() {
    int x = 5;
    __attribute__((acquired_after(x))) int y;
    printf("Value of acquired after attribute: %d\n", y);
    return 0;
}
