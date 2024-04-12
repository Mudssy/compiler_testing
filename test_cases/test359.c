
#include <stdio.h>
#include <immintrin.h>  // AVX intrinsics library

void testFunction() {
    __attribute__((aligned(32))) float result[8];  // Ensure alignment

    __m256 a = _mm256_set1_ps(0);    // Initialize vector with all elements set to 0
    __m256 b = _mm256_setr_ps(1, 2, 3, 4, 5, 6, 7, 8);  // Initialize vector
    
    a = _mm256_add_ps(a, b);   // Add vectors

    _mm256_storeu_ps(result, a);  // Store result into array

    for (int i = 0; i < 8; ++i) {
        printf("%f\n", result[i]);  // Print the elements of the array
    }
}

int main() {
    testFunction();
    return 0;
}
