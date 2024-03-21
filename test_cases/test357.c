
#include <stdio.h>
#include <immintrin.h>

void print_vector(__m256i vect) {
    float* arr = (float*)&vect;
    printf("[%.2f, %.2f, %.2f, %.2f]\n", 
           arr[0], arr[1], arr[2], arr[3]);
}

int main() {
    __m256i vect = _mm256_setr_epi32(1, 2, 3, 4, 5, 6, 7, 8);
    __m256i mask = _mm256_setr_epi32(-1, -1, 0, 0, 0, 0, -1, -1);
    
    vect = _mm256_shuffle_ps(vect, vect, _MM_SHUFFLE(0, 1, 2, 3));
    vect = _mm256_blendv_epi8(vect, _mm256_setzero_si256(), mask);
    
    print_vector(vect);
}
