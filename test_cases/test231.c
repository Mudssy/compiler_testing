
#include <stdio.h>

int main() {
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wunknown-pragmas"
        int a = 5;
        printf("Value of a: %d\n", a);
    #pragma clang diagnostic pop
    return 0;
}
