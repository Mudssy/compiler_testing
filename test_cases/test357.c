
#include <stdio.h>
#include <immintrin.h>

void print_m128i(__m128i var) {
    int *val = (int*) &var;
    printf("Numerical: %d %d %d %d\n", val[0], val[1], val[2], val[3]);
}

void print_array(char *name, __m128i var) {
    int *val = (int*) &var;
    printf("%s: %d %d %d %d\n", name, val[0], val[1], val[2], val[3]);
}

int main() {
    __m128i a = _mm_setr_epi32(9, 8, 7, 6);
    __m128i b = _mm_setr_epi32(5, 4, 3, 2);
    __m128i c = _mm_setr_epi32(1, 0, -1, -2);
    
    print_array("a", a);
    print_array("b", b);
    print_array("c", c);
}
