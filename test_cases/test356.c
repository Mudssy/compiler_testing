
#include <stdio.h>
#include <immintrin.h>  // AVX2 intrinsic header file

void print_vector(__m256i v) {
    float* val = (float*)&v;  // Convert the vector to an array
    printf("{%f, %f, %f, %f}\n", val[0], val[1], val[2], val[3]);
}

int main() {
    __m256i a = _mm256_setr_epi32(4, 8, 7, 6, 3, 2, 1, 0); // Initialize vector with specified order
    __m256i b = _mm256_setr_epi32(0, 1, 2, 3, 4, 5, 6, 7); // Initialize vector with another order
    print_vector(a);
    print_vector(b);
    
    __m256i shuffleA = _mm256_permute2x128_si256(a, b, _MM_SHUFFLE(0, 2, 3, 1)); // Perform shuffle
    print_vector(shuffleA);  // Print the results
    
    return 0;
}
