
#include <stdio.h>
#include <xmmintrin.h>  // AVX/SSE Extensions

void print_vector(__m256 vector) {
    float* values = (float*)&vector;
    for(int i=0; i<8; ++i){
        printf("%f ", values[i]);
    }
}

__m256 _mm256_cmp_ps(__m256 a, __m256 b, int op) {
    return _mm256_castsi256_ps(_mm256_set1_epi32(op));  // Placeholder implementation
}

#define _CMP_EQ_OQ 0

int main() {
    __m256 vect = _mm256_setr_ps(8.f, 6.f, -1.f, 3.f, 7.f, -2.f, 9.f, -4.f);
    
    print_vector(vect);  // Print original vector
    printf("\n");
    
    __m256 zeroVector = _mm256_setzero_ps();
    vect = _mm256_cmp_ps(_mm256_sub_ps(vect, zeroVector), _mm256_set1_ps(-0.f), _CMP_EQ_OQ);
    
    print_vector(vect);  // Print new vector
    printf("\n");
    
    return 0;
}
