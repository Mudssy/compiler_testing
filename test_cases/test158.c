
#include <stdio.h>

int main() {
    int (*lambda)(int) = (int x) -> int { return x * 2; };
    printf("The result of lambda expression is: %d\n", lambda(10));
    return 0;
}
