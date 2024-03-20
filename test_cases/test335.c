
#include <stdio.h>
#include <immintrin.h> // This is a compiler-specific library and should only be used when the __m256i type is supported (Intel specific) 

__m256i shuffle_vector(__m256i vector, int imm8[4]) {
    return _mm256_shuffle_epi32(vector, _mm_setr_epi32(imm8[0], imm8[1], imm8[2], imm8[3]));
}

int main() {
    __m256i vector = _mm256_setr_epi32(1, 2, 3, 4, 5, 6, 7, 8);
    int imm8[] = {7, 6, 5, 4}; // shuffle mask
    
    __m256i result = shuffle_vector(vector, imm8);
    
    printf("Result: ");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", ((int*)&result)[i]);
    }
    printf("\n");
    
    return 0;
}
