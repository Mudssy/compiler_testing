
#include <stdio.h>
#include <immintrin.h>  // Required for vector extensions in GCC/Clang

void print_shuffle(__m256i v1, __m256i v2) {
    __m256i result = _mm256_permutevar8x32_epi32(v1, v2);
    int values[8];
    
    _mm256_storeu_si256((__m256i*)values, result);

    for (int i = 0; i < 8; ++i) {
        printf("%d ", values[i]);
    }
}
