
#include <stdio.h>
#include <omp.h>

int main(void) {
    int num_threads = 0;
    
    #pragma omp parallel 
    {
        printf("Hello world from thread %d\n", omp_get_thread_num());
        
        if (omp_get_thread_num() == 0)
            num_threadthreads = omp_get_num_threads();
    }
    
    printf("There were %d threads\n", num_threads);

    return 0;
}
