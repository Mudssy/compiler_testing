
#include <stdio.h>
#ifdef _OPENMP
    #include <omp.h>
#endif

int main(void) {
    printf("OpenMP Specification: %d\n", _OPENMP);  // If compiler supports OpenMP, this should print the version number
    
    #pragma omp parallel
    {
        int ID = omp_get_thread_num();
        printf("Hello from thread %d\n", ID);
    }
    
    return 0;
}
