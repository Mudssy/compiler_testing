
#include <stdio.h>
#include <immintrin.h>  // AVX intrinsics library

void testFunction() {
    __attribute__((aligned(32))) float result[8];  // Ensure alignment

    __m256 a = _mm256_set1_ps(0.0f);  // Set all elements to same value
    __m256 b = _mm256_set1_ps(1.0f);  // Set all elements to another value

    __m256 c = _mm256_add_ps(a, b);  // Add them together

    _mm256_store_ps(result, c);  // Store the result in an array
}

int main() {
    testFunction();
    
    return 0;
}
