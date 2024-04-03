
#include <stdint.h>

int myCallFunction(__m256i ctx); // For AVX2
// or
int myCallFunction(__m128i ctx); // For SSE2

int main() {
    __m256i avx_ctx;  // For AVX2
    // or
    __m128i sse_ctx;  // For SSE2

    int result = myCallFunction(avx_ctx); // For AVX2
    // or
    int result = myCallFunction(sse_ctx); // For SSE2

    return result;
}
