
#include <stdio.h>

int main() {
    int x = 10;
    int y = __builtin_expect(x > 5, 1);
    if (y) {
        printf("The condition is expected to be true!\n");
    } else {
        printf("The condition is not expected.\n");
    }
    return 0;
}
