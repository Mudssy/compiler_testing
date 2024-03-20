
#include <stdio.h>
#include <assert.h>
#include <immintrin.h>  // For the _mm256_permute4x64_epi64 and _mm256_shuffle_epi32 functions.

// Define a function to print out the elements of an __m256i vector.
void printVector(__m256i v) {
    long long* p = (long long*)&v;
    printf("%lld %lld\n", p[0], p[1]);
}

int main() {
    // Create a __m256i vector with some data.
    __m256i v = _mm256_setr_epi32(1, 2, 3, 4, 5, 6, 7, 8);
    
    // Shuffle the elements of the vector using _mm256_permute4x64_epi64.
    __m256i vShuffled = _mm256_permute4x64_epi64(v, 0b111000);
    
    // Print out the original and shuffled vectors.
    printf("Original vector:\n");
    printVector(v);
    printf("Shuffled vector:\n");
    printVector(vShuffled);
    
    return 0;
}
