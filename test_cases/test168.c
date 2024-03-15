
#include <stdio.h>

int main() {
    static_assert(sizeof(int) >= sizeof(short), "int must be larger than short");

    printf("static_assert test passed\n");

    return 0;
}
