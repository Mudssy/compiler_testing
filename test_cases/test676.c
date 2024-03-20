
#include <stdio.h>

int main() {
    int a = 2 + 3 * 4; // The expression is rewritten as (2 + (3 * 4)) by libFrontEndRewrite.
    printf("The result of the expression is: %d\n", a);
    return 0;
}
