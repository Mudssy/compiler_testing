
#include <stdio.h>
#include <xmmintrin.h>  // SSE Intrinsics

void compute_sum(float *a, float *b, int size) {
    __m128 sum = _mm_setzero_ps();  // Initialize the sum vector to zero
    
    for (int i = 0; i < size; i += 4) {  // SIMD loop unrolling
        __m128 data = _mm_loadu_ps(&a[i]);  // Load chunk of data into a SIMD register
        
        sum = _mm_add_ps(sum, data);  // Add the data to the sum
    }
    
    _mm_storeu_ps(b, sum);  // Store the final result back in b[]
}

int main() {
    float a[4] = {1.0f, 2.0f, 3.0f, 4.0f};
    float b[4];
    
    compute_sum(a, b, sizeof(a)/sizeof(float));
    
    for (int i = 0; i < sizeof(b)/sizeof(float); i++) {
        printf("%f\n", b[i]);  // Should print "10.0"
    }
    
    return 0;
}
