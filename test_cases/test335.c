
#include <omp.h>
#include <stdio.h>
int main(){
    int i, A[4] = {0,1,2,3}, B[4] = {0,1,2,3}, C[4]; // Initialization of B was missing here
    
    #pragma omp simd 
    for (i=0; i<4; i++){
        C[i] = A[i] + B[i]; 
    }
        
    for(i = 0; i < 4; i++)
        printf("%d ", C[i]); // This will print: 0 2 4 6 
}
