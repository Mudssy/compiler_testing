
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    #pragma clang optimize off
    printf("Addition without optimization: %d\n", add(5, 3));
    #pragma clang optimize on

    printf("Addition with optimization: %d\n", add(5, 3));

    return 0;
}
