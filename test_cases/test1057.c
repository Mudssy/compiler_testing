
#include <stdio.h>

struct S {
    char c;
    int n __attribute__ ((aligned(4))); // Align 'n' to multiples of 4 bytes
};

int main() {
    struct S s = {'a', 10};
    
    // Check if address is divisible by 4, which means it's properly aligned for a 4-byte int
    char *p = (char *)&s;
    while ((size_t)p % sizeof(int)) {
        ++p;
    }

    int diff_n_c = (int)(void*)p - (int)(void*)(&s.c);
    
    printf("Byte: %d\n", diff_n_c);
    
    return 0;
}
