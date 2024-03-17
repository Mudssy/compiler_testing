
#include <stdio.h>

int main() {
    _Static_assert(sizeof(char) == 1, "Size of char must be 1 byte");
    printf("Assertion passed\n");
    return 0;
}
