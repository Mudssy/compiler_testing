
#include <immintrin.h>
#include <stdio.h>

__m256 rand_vector(__m256i seed) { 
    __m256 res = _mm256_cvtepi32_ps(seed); // Convert integers to floats
    return res;
}

int main() {
    __m256i seed = _mm256_setr_epi32(0, 1, 2, 3, 4, 5, 6, 7); // Set initial vector values
    __m256 randNumbers = rand_vector(seed); // Generate random numbers using AVX instructions
    
    float* f = (float*)&randNumbers; // Convert AVX register to array of floats
    printf("Random Numbers: ");
    for(int i = 0; i < 8; i++) {
        printf("%f ", f[i]);
    }
    return 0;
}
