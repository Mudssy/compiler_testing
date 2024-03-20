
#include <stdio.h>

int main() {
    _Static_assert(sizeof(int) == 4, "Expected int size is 4 bytes");
    printf("Compilation successful\n");
    return 0;
}
