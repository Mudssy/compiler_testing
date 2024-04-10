
#include <immintrin.h>
#include <stdio.h>

void print_vector(__m128 vec) {
    float* f = (float*)&vec;
    printf("%f, %f, %f, %f\n", f[0], f[1], f[2], f[3]);
}

int main() {
    __m128 vec = _mm_setr_ps(1.f, 2.f, 3.f, 4.f); // vector with 4 floats (vec is 128 bit wide)
    print_vector(vec);

    __m128i shuffle_mask = _mm_setr_epi32(0, 1, 2, 3); // shuffle mask - doesn't change anything
    vec = _mm_permutevar_ps(vec, shuffle_mask); // permute vec with shuffle_mask
    print_vector(vec);
}
