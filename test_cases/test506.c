
#include <stdio.h>

int main() {
    volatile int x = 0;
    volatile int y = 1 / x;
    printf("Undefined behavior: %d\n", y);
    return 0;
}
