
#include <immintrin.h> // AVX intrinsics library
#include <stdio.h> 
#include <random>
#include <time.h>  

float f[8];

void generate_floats(__m256* random) {
    std::mt19937 generator(time(0)); // Mersenne Twister generator for randomness
    std::uniform_int_distribution<int> distribution(-INT_MAX, INT_MAX); // Range of 4-bit integer values
    
    int seed[8]; // Seed vector
    for (int i = 0; i < 8; ++i) {
        seed[i] = distribution(generator);
    }

    __m256i seed_vector = _mm256_setr_epi32(seed[0], seed[1], seed[2], seed[3], seed[4], seed[5], seed[6], seed[7]); // Load the seed into a 256-bit vector
    
    *random = _mm256_cvtepi32_ps(seed_vector); // Convert the integer values to floats
}
