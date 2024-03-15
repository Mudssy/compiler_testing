
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    #pragma clang optimize on
    for(int i = 0; i < 1000000; ++i) {
        a += b;
    }
    #pragma clang optimize off

    printf("The result is: %d\n", a);

    return 0;
}
