
#include <stdio.h>

int main() {
    alignas(8) int a[4];
    printf("%lu\n", (long unsigned int)&a[0] % 8);
    return 0;
}
