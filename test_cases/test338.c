
#include <stdio.h>
#ifdef _OPENMP
    #include <omp.h>
#else
    #error "OpenMP is required for this program"
#endif

int main() {
    int i;
    int A[10];
    for(i=0; i<10; i++) {
        A[i] = i*2;
    }
    #pragma omp simd
    for (i = 0; i < 10; ++i) {
        printf("%d ", A[i]);
    }
    return 0;
}
