
#include <stdio.h>

int main() {
    struct alignas(16) S {
        char c;
        int n;
    };
    
    printf("Alignment of struct S: %zu\n", _Alignof(struct S)); // Outputs alignment requirement of the type.
    
    return 0;
}
