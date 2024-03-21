
#include <stdio.h>
#include <immintrin.h>  // AVX2 intrinsics

void print_vector(__m256 vec) {
    float* f = (float*)&vec;
    printf("[%.3f, %.3f, %.3f, %.3f]\n", f[0], f[1], f[2], f[3]);
}

int main() {
    __m256 vec = _mm256_setr_ps(1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f);
    print_vector(vec);
    
    __m256 perm = _mm256_permute2f128_ps(vec, vec, 0x39);
    print_vector(perm);

    return 0;
}
