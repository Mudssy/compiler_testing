
#include <stdio.h>
#include <immintrin.h>

void print_vector(__m256i v) {
    int* val = (int*)&v;
    printf("[%d %d %d %d]\n", val[0], val[1], val[2], val[3]);
}

int main() {
    __m256i a = _mm256_setr_epi32(1, 2, 3, 4, 5, 6, 7, 8);
    __m256i shuffled;

    printf("Original Vector: ");
    print_vector(a);

    // Shuffle using the mask [0, 1, 2, 3]
    int mask[4] = {0, 1, 2, 3};
    __m256i shuffled_vector = _mm256_permutevar8x32_epi32(a, *(__m256i*)mask);

    printf("Shuffled Vector: ");
    print_vector(shuffled_vector);

    return 0;
}
