
#include <stdio.h>
#include <omp.h> // OpenMP library for parallel programming

int main() {
    int i;
    
    #pragma omp parallel num_threads(4) shared(i)  // Create a team of threads to execute the loop in parallel
    {
        #pragma omp for schedule(static) ordered  // Distribute iterations of loop among threads and preserve order
        for (i = 0; i < 16; ++i) {
            #pragma omp ordered  
            {  // Ordered block, will wait until previous operation in the same "ordered" construct has completed before execution.
                printf("Thread %d is printing iteration number %d\n", omp_get_thread_num(), i);
            }
        }
    }
    
    return 0;
}
