
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("Before optimization: %d, %d\n", a, b);

    #pragma clang optimize off
    for (int i = 0; i < 1000; ++i) {
        a += i;
    }
    #pragma clang optimize on

    printf("After optimization: %d, %d\n", a, b);
    return 0;
}
