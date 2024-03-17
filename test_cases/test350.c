
#include <stdio.h>
#include <xmmintrin.h>  // SSE Intrinsics header file
#include <pmmintrin.h>  // SSE3 Intrinsics header file

void print_vector(__m128 v) {
    float values[4];
    _mm_storeu_ps(values, v);  // Store vector data in array
    printf("Values: %f %f %f %f\n", values[0], values[1], values[2], values[3]);
}

int main() {
    __m128 a = _mm_setr_ps(1.0, 2.0, 3.0, 4.0);  // Load 4 floats into vector register
    print_vector(a);
    
    __m128 b = _mm_setr_ps(5.0, 6.0, 7.0, 8.0);  // Load another set of 4 floats into vector register
    print_vector(b);
    
    __m128 result = _mm_add_ps(a, b);  // Add two vectors together and store the result in a new vector register
    print_vector(result);

    return 0;
}
