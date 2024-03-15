
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    __builtin_assume(a > b);

    printf("Assumption made: a > b\n");
    return 0;
}
