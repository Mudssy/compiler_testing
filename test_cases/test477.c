
#include <stdint.h>
#include <immintrin.h> // necessary to use SIMD intrinsics like __m256i etc

// For AVX2
int __vectorcall myCallFunction(__m256i ctx) {
    return 0;  // Dummy return, replace with your actual implementation
}

// or, for SSE2
int __vectorcall myCallFunction(__m128i ctx) {
    return 0;  // Dummy return, replace with your actual implementation
}

int main() {
    // For AVX2
    __m256i avx_ctx = _mm256_setzero_si256();  
    
    int result = myCallFunction(avx_ctx);  // You can pass any SIMD register here

    // or, for SSE2
    __m128i sse_ctx = _mm_setzero_si128();  
    
    int result = myCallFunction(sse_ctx);  // You can pass any SIMD register here

    return 0;
}
