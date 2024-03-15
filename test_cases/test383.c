
#include <stdio.h>

int main() {
    int a = 10;
    if (a > 5) {
        int b = 20;
        printf("b: %d\n", b);
    } else {
        int c = 30;
        printf("c: %d\n", c);
    }
    // Uncomment the following lines to test for a compiler error
    // printf("b: %d\n", b);
    // printf("c: %d\n", c);
    return 0;
}
