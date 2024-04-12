
#include <immintrin.h>

void generate_floats(__m256* random) {
    __m128i seed = _mm_setr_epi32(0, 1, 2, 3); // Load the seed into a 128-bit vector
    
    *random = _mm256_cvtepi32_ps(seed); // Convert the integer values to floats
}
