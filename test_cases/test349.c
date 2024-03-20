
#include <stdio.h>
#include <immintrin.h> // For AVX2 intrinsics

int main() {
    __m256i x = _mm256_setr_epi32(1, 2, 3, 4, 5, 6, 7, 8);
    __m256i y = _mm256_permute2x128_si256(x, x, -1); // This is an invalid shuffle mask
    int* result = (int*)&y;
    
    for(int i = 0; i < 8; ++i) {
        printf("%d ", result[i]);
    }
    
    return 0;
}
