
#include <stdio.h>
#include <xmmintrin.h>  // Needed for AVX/SSE instructions

void print_m128(__m128 v) {
    float* ptr = (float*)&v;
    printf("%.6f %.6f %.6f %.6f\n", ptr[0], ptr[1], ptr[2], ptr[3]);
}

int main() {
    // Create two vectors with float values
    __m128 v1 = _mm_setr_ps(1.0, 2.0, 3.0, 4.0);
    __m128 v2 = _mm_setr_ps(5.0, 6.0, 7.0, 8.0);
    
    // Print the vectors before shuffling
    printf("Before shuffle:\n");
    print_m128(v1);
    print_m128(v2);
    
    // Shuffle v1 and v2 using a control vector with values 3, 1, 2, 0 (shuffles vectors)
    __m128 control = _mm_setr_ps(3.0, 1.0, 2.0, 0.0); // <-- This is the line that I'm not sure about
    v1 = _mm_shuffle_ps(v1, v2, _MM_SHUFFLE(3, 1, 2, 0));
    
    // Print the shuffled vectors
    printf("After shuffle:\n");
    print_m128(v1);
    
    return 0;
}
