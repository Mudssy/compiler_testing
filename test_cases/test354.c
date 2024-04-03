
#include <stdio.h>
#include <immintrin.h>  // AVX/AVX2 intrinsics 

void print_vector(__m256 vect){
    float *p = (float*)&vect;
    printf("%.17g %.17g %.17g %.17g\n", p[3], p[2], p[1], p[0]);   // print in reverse order to match the printed permutation of AVX intrinsics
}

int main() {
    __m256 vec = _mm256_set_ps(4.f, 3.f, 2.f, 1.f);   // initialize vector
    __m256i permutation = _mm256_set1_epi32(0x39);   // set the permutation
    __m256 perm = _mm256_permutevar8x32_ps(vec, permutation);  // apply permutation

    print_vector(perm);
    
    return 0;
}
