
#include <stdio.h>

struct S {
    char c;
    int n alignas(4);  // Align 'n' to multiples of 4 bytes
};

int main() {
    struct S s = {'a', 10};
    printf("Address of 'c': %p, Address of 'n': %p\n", &s.c, &s.n);
    
    return 0;
}
