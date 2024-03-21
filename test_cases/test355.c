
#include <stdio.h>
#include <omp.h>

int main() {
    int num_threads = 4;
    omp_set_num_threads(num_threads);

    int x[16], i, result[16];

    for (i=0; i<16; i++) {
        x[i] = i+1;
    }
    
    #pragma omp parallel 
    {
        int thread_num = omp_get_thread_num();
        __builtin_prefetch(x, 0, 3);
        
        // Perform the broadcast operation using GCC's vector extension.
        result[thread_num] = x[(thread_num*2)%16];
    }
    
    printf("Broadcasting:\n");
    for (i=0; i<16; i++) {
        printf("%d ", result[i]);
    }
}
