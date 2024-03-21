pp
#include <omp.h>
#include <stdio.h>
int main(){
    int i, A[4] = {0,1,2,3}, B[4], C[4];
    
    // Here A and B are aligned arrays and C is an unaligned array
    #pragma omp simd
    for (i=0; i<4; i++) 
        C[i] = A[i] + B[i]; 
        
    for(i = 0; i < 4; ++i){
       printf("%d ", C[i]);
    }
    return 0; 
}
