
#include <stdio.h>
#include <string.h>

int main() {
    struct alignas(8) S {
        char c;
        int n;
    };

    printf("Alignment of struct S: %zu\n", alignof(struct S));
    
    return 0;
}
