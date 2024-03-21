
#include <stdio.h>
#include <immintrin.h> // For __m256i and _mm256_permute_epi32 intrinsic

int main() {
    int originalNumber = 0xF0;  // Binary: 11110000
    
    __m256i originalVector = _mm256_set1_epi8(originalNumber);
    
    __m256i shiftedVector = _mm256_permute_epi32(originalVector, 0b00111000); // Rotate right by 1 bit
    
    int result = _mm256_extract_epi8(shiftedVector, 0); // Extract the first byte which is now after rotation
    
    printf("Original number: %x\n", originalNumber);
    printf("After right shift by one bit: %x\n", result);
    
    return 0;
}
