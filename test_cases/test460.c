
#include <stdio.h>

int main() {
    int x __attribute__((weak)) = 42;
    printf("The value of weak variable is: %d\n", x);
    return 0;
}
