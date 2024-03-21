
#include <stdio.h>
#include <x86intrin.h> // Include necessary library for SSE intrinsics
#include <immintrin.h> 

// Function to generate a vector of power-of-two size with random elements 
__m256 rand_vector(__m256i seed) {
    __m256 res;
    for (int i = 0; i < 8; ++i) {
        seed = _mm256_add_epi32(seed, _mm256_set1_epi32(1)); // Add 1 to each element of the vector
        res = _mm256_cvtepi32_ps(_mm256_extractf128_si256(seed, 0)); // Convert integers to floats
    }
     return res;
}

int main() {
    __m256i seed = _mm256_setr_epi32(0, 1, 2, 3, 4, 5, 6, 7); // Set initial vector values
    __m256 randNumbers = rand_vector(seed); // Generate random numbers using SSE
    float *res = (float*)&randNumbers; // Convert AVX result to float array
    
    for (int i = 0; i < 8; ++i) {
        printf("%f ", res[i]);
    }
     return 0;
}
