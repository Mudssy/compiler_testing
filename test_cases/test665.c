
#include <stdio.h>

#define EXPAND(x) x * 2

int main() {
    int a = 5;
    int b = EXPAND(a);
    printf("The value of b is: %d\n", b);
    return 0;
}
