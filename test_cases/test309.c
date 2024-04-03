
#include <stdio.h>
#include <omp.h>

int main(void) {
    int num_threads = omp_get_max_threads(); // Get the maximum number of threads that could be used in a parallel region
    
    #pragma omp parallel 
    {
        printf("Hello world from thread %d\n", omp_get_thread_num());
        
        if (omp_in_parallel()) {
            num_threads = omp_get_num_threads(); // Get the number of threads actually used in a parallel region
        } 
    }
    
    printf("Number of threads: %d\n", num_threads);
    
    return 0;
}
