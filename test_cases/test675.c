
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    printf("After swapping, x: %d, y: %d\n", x, y);
    return 0;
}
