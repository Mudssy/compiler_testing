
#include <stdio.h>

int main() {
    int x;
    #pragma clang diagnostic error "-Wunused-variable"
    x = 5;

    printf("The value of x is: %d\n", x);
    return 0;
}
