
#include <stdio.h>

void printVector(int* vec, int size) {
    printf("{ ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", vec[i]);
    }
    printf("}\n");
}

int main() {
    // Test with vectors whose size is not a power of two.
    int vec1[] = {1, 2, 3};
    printVector(vec1, sizeof(vec1)/sizeof(*vec1));

    // Test with padding: the vector size has to be a multiple of 4 (or 8), let's add some padding.
    int vec2[] = {4, 5, 6};
    printVector((int*)__builtin_shufflevector(vec2, vec2, (__m128i){0,0,0,0}), sizeof(vec2)/sizeof(*vec2));

    return 0;
}
