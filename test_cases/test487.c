
#include <stdio.h>

int main() {
    int x = 0;
    printf("Value of x: %d\n", x);
    #pragma clang diagnostic push
    #pragma clang diagnostic warning "-Wunused-variable"
    if (x > 0) {
        int y = x * 2;
        printf("Value of y: %d\n", y);
    }
    #pragma clang diagnostic pop
    return 0;
}
