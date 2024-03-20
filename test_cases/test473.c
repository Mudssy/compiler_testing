
#include <stdio.h>

void my_memcpy(int * __restrict__ dest, int const * __restrict__ src, size_t count) {
    for (size_t i = 0; i < count; ++i) {
        dest[i] = src[i];
    }
}

int main() {
    int src[] = {1, 2, 3, 4};
    my_memcpy(src + 1, src, sizeof(int)); // Undefined behavior due to overlapping memory
    for (size_t i = 0; i < sizeof(src) / sizeof(*src); ++i) {
        printf("%d ", src[i]);
    }
    printf("\n");
}
