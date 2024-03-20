
#include <stdio.h>
#include <immintrin.h> // AVX or later required for Intel intrinsics

// Define the vector type based on the compiler settings
#if defined(__INTEL_COMPILER) || defined(_MSC_VER)
    typedef __m256d vec;
#else
    #include <xmmintrin.h> // SSE intrinsics for GCC/Clang
    typedef __m128d vec;
#endif

int main() {
    double src[] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8 };
    
    // Load the source vector from memory
    vec vsrc = _mm_loadu_pd(src);
    
    int shuffleMask[] = { 2, 3, 4, 5, 6, 7, 0, 1 };
    
    // Perform the perfect shuffle operation using the mask and vector
    vec vres = _mm_permute2f128_pd(vsrc, vsrc, *(__m128i*)shuffleMask);
    
    double res[4];
    
    // Store the result to memory
    _mm_storeu_pd(res, vres);
    
    printf("Results: %f, %f\n", res[0], res[1]);
    
    return 0;
}
