
#include <stdio.h>
#include <xmmintrin.h> // Include necessary header file

void print_vector(__m128 v) {
    float *ptr = (float*)&v;
    printf("(%f, %f, %f, %f)\n", ptr[0], ptr[1], ptr[2], ptr[3]);
}

int main() {
    __m128 a = _mm_setr_ps(1.0, 2.0, 3.0, 4.0); // Create vector a
    __m128 b = _mm_setr_ps(5.0, 6.0, 7.0, 8.0); // Create vector b
    __m128 result;

    printf("Vector A: ");
    print_vector(a);
    printf("Vector B: ");
    print_vector(b);

    result = _mm_add_ps(a, b); // Add vectors a and b
    printf("Result of addition: ");
    print_vector(result);
    
    return 0;
}
