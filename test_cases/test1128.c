
#include <stdio.h>
#include <stdalign.h>

_Alignas(16) int x;
_Alignas(32) char c;

int main() {
    printf("Size of x: %zu\n", sizeof(x));
    printf("Address of x: %p\n", (void *)&x);
    printf("Alignment of x: %zu\n", alignof(decltype(x)));

    printf("\n");
    
    printf("Size of c: %zu\n", sizeof(c));
    printf("Address of c: %p\n", (void *)&c);
    printf("Alignment of c: %zu\n", alignof(decltype(c)));

    return 0;
}
