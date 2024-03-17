
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result = __builtin_add_overflow(a, b, &result);

    if (result) {
        printf("Addition of %d and %d results in overflow.\n", a, b);
    } else {
        printf("Addition of %d and %d is %d\n", a, b, result);
    }

    return 0;
}
