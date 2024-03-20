
#include <stdio.h>
#ifdef _OPENMP
    #include <omp.h>
#endif

int main() {
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    
    #pragma omp parallel for reduction(+:sum)
    for (int i=0; i<10; ++i){
        sum += data[i];
    }
    
    printf("Sum of array elements = %d\n", sum);
    
    return 0;
}
