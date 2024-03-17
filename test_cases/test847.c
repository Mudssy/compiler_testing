
#include <stdio.h>

int main() {
    int (^add)(int, int) = ^(int a, int b){ return a + b; };
    printf("Result of compound literal addition: %d\n", add(3, 4));
    return 0;
}
