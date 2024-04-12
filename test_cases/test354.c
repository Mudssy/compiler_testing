
#include <immintrin.h>
#include <stdio.h>

void print_vector(__m128 vec) {
    float* f = (float*)&vec;
    printf("%f, %f, %f, %f\n", f[0], f[1], f[2], f[3]);
}

int main() {
    __m128 vec = _mm_setr_ps(1.0f, 2.0f, 3.0f, 4.0f); // initialize a vector with four floats
    int shuffle_mask = _MM_SHUFFLE(3,2,1,0); // mask to permute elements in the vector
    vec = _mm_permutevar_ps(vec, shuffle_mask); // permute vec with shuffle_mask
    print_vector(vec);
}
