
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = __builtin_choose_expr(a > b, a + 5, b - 3);
    printf("Result: %d\n", c);
    return 0;
}
