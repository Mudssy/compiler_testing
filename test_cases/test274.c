
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    printf("Sum is %d\n", sum(2, 3));
    #pragma GCC optimize("O0") // OPT Level 0 (Disable optimization)
    printf("Sum is %d\n", sum(2, 3));
    #pragma GCC optimize("O1") // OPT Level 1 (Minimal optimization)
    printf("Sum is %d\n", sum(2, 3));
    #pragma GCC optimize("O2") // OPT Level 2 (Full speed and size optimization)
    printf("Sum is %d\n", sum(2, 3));
    #pragma GCC optimize("Os") // OPT Size (-Os)
    printf("Sum is %d\n", sum(2, 3));
    return 0;
}
