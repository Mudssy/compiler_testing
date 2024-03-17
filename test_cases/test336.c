
#include <stdio.h>
#include <omp.h>  // OpenMP library for parallelism

int main() {
    int vect_size = 8;  // Vector size should be power of two for perfect shuffle
    double a[vect_size], b[vect_size];
  
    #pragma omp simd
    for(int i=0;i<vect_size;++i) {
        a[i] = 1.0*(i+1);
        b[i] = a[i];  // Copy array
    }

    printf("Before Shuffle:\n");
  
    for(int i=0;i<vect_size;++i) {
        printf("%f ",a[i]);
    }
    
    #pragma omp simd
    for(int i=0;i<vect_size/2;++i) {  // Shuffle array b
        double temp = b[2*i];
        b[2*i] = b[(2*i+1)%vect_size];
        b[(2*i+1)%vect_size] = temp;
    }  
    
    printf("\n\nAfter Shuffle:\n");
    
    for(int i=0;i<vect_size;++i) {
        printf("%f ",b[i]);
    }
    
    return 0;
}
