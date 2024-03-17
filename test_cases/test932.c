
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    if (__builtin_expect(x == 5, 1)) {
        printf("CHECK-SAME: x is 5\n");
    } else {
        printf("CHECK-SAME: x is not 5\n");
    }

    if (__builtin_expect(y == 10, 1)) {
        printf("CHECK-SAME: y is 10\n");
    } else {
        printf("CHECK-SAME: y is not 10\n");
    }
    return 0;
}
