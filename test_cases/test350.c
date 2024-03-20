
#include <stdio.h>
#include <immintrin.h> // Intel intrinsics header file, you may need to install it

void print_vector(__m256 v) {
    float *ptr = (float*)&v;
    printf("[%.4f %.4f %.4f %.4f]\n", ptr[0], ptr[1], ptr[2], ptr[3]);
}

int main() {
    __m256 v1 = _mm256_setr_ps(1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0); // Initial vector
    __m256i shuffleMask = _mm256_setr_epi32(1, 0, 3, 2, 5, 4, 7, 6); // Shuffle mask to swap every two elements in a pair of vectors
    
    printf("Initial vector: ");
    print_vector(v1);
    
    __m256 v2 = _mm256_permute_ps(v1, shuffleMask); // Perform the perfect shuffle operation
    
    printf("Shuffled vector: ");
    print_vector(v2);
    
    return 0;
}
