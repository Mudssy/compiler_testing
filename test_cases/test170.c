
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunknown-pragmas"
        int x = 5;
    #pragma clang diagnostic pop

    printf("The value of x is: %d\n", x);
    return 0;
}
