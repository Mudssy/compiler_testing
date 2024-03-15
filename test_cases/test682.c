
#include <stdio.h>

int main() {
    int x = 0;
    #pragma clang diagnostic push
    #pragma clang diagnostic warning "-Wunused-variable"
    if (1)
        x = 5;
    else
        x = 3;
    #pragma clang diagnostic pop

    printf("The value of x is: %d\n", x);
    return 0;
}
