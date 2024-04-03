
#include <stdio.h>

int main() {
    struct S {
        char c;
        int n;
    } __attribute__((aligned(16))); // attribute to specify alignment requirement
    
    printf("Alignment of struct S: %zu\n", _Alignof(struct S)); // Outputs alignment requirement of the type.
    
    return 0;
}
