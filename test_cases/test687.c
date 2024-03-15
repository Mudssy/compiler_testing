
#include <stdio.h>

int main() {
    int x = 42;

    int (*lambda)(int) = ^(int y){ return x * y; };
    int result = lambda(3);

    printf("Result: %d\n", result);

    return 0;
}
