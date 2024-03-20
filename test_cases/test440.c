
#include <stdio.h>

int main() {
    const int constVar = 10;
    volatile int volatileVar = 20;

    printf("Const Variable: %d\n", constVar);
    printf("Volatile Variable: %d\n", volatileVar);

    return 0;
}
