
#include <stdio.h>
#include <omp.h>

int main() {
    int a[16] = {};
    int i;

    #pragma omp simd
    for (i=0; i<16; i++) {
        a[i] = 5;  // here, 5 is the broadcast value
    }
    
    printf("\nBroadcasting:\n");
    for (i=0; i<16; i++) {
        printf("%d ", a[i]);
    }
}
