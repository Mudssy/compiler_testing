
#include <stdio.h>

int main() {
    int x = 5;
    alignas(8) int y;
    double d = 3.14;
    alignas(16) long long z;

    printf("Size of int: %zu\n", sizeof(x));
    printf("Address of int aligned to 8 bytes: %p\n", (void *)&y);
    printf("Size of double: %zu\n", sizeof(d));
    printf("Address of long long aligned to 16 bytes: %p\n", (void *)&z);
    
    return 0;
}
