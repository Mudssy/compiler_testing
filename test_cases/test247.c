
#include <stdio.h>

int main() {
    _Static_assert(sizeof(char) == 1, "Size of char is not 1 byte");
    _Static_assert(sizeof(short) >= 2, "Size of short is less than 2 bytes");
    _Static_assert(sizeof(int) >= 4, "Size of int is less than 4 bytes");
    _Static_assert(sizeof(long long) >= 8, "Size of long long is less than 8 bytes");
    
    printf("Compiler supports _Static_assert.\n");
    return 0;
}
