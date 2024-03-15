
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    void (^block)(void) = ^{
        printf("x: %d, y: %d\n", x, y);
    };

    x = 30;
    y = 40;

    block(); // Output should be "x: 10, y: 20" due to block capturing the values at time of creation

    return 0;
}
