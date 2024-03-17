
#include <stdio.h>
#include <immintrin.h>

void print_array(__m256i array) {
    long* values = (long*)&array;
    printf("%ld %ld\n", values[0], values[1]);
}

int main() {
    __m256i input  = _mm256_setr_epi64x(1, 2, 3, 4);
    __m256i output = _mm256_permute4x64_epi64(input, (int)_MM_SHUFFLE(0, 1, 2, 3));
    
    print_array(output);
}
