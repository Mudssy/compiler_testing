
#include <stdio.h>
#include <omp.h>

int main(void) {
    int N = 5; // non-power of 2 size
    int i;
    
    int vect[N];
    for (i=0; i<N; i++){
        vect[i] = i+1;
    }
    
    #pragma omp parallel for simd simdlen(8) aligned(vect: 64)
    for (i=0; i<N; i++){
         printf("Original vector element %d is %d\n", i, vect[i]);
    }
    
    int mask[N];
    // generate the perfect shuffle mask
    for (i = 0; i < N; ++i) {
        if(i%2 == 0){
            mask[i] = i+1;
        } else{
            mask[i] = i-1;
        }
    } 
  
    #pragma omp parallel for simd simdlen(8) aligned(vect: 64)
    for (i=0; i<N; i++){
         vect[i] = vect[mask[i]];
    }
    
    #pragma omp parallel for simd simdlen(8) aligned(vect: 64)
    for (i=0; i<N; i++){
        printf("Shuffled vector element %d is %d\n", i, vect[i]);
    }
  
    return 0;
}
