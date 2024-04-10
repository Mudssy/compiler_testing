
#include <stdio.h>
#include <xmmintrin.h>  // This is for _mm256 intrinsics

void print_vector(__m256 vect) {  // Function to print vector elements
    float* f = (float*)&vect;
    printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",
           f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7]);
}

int main() {
    __m256 vectorA, vectorB; // 8-bit vectors with AVX

    float av[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f}; // Vector A values
    vectorA = _mm256_loadu_ps(av);
    print_vector(vectorA);
    
    float bv[] = {8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f}; // Vector B values
    vectorB = _mm256_loadu_ps(bv);
    print_vector(vectorB);

    return 0;
}
