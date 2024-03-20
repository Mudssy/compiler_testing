
#include <stdio.h>
#include <omp.h>

int main() {
    int nthreads, tid;
    
    /* This is a pragma for OpenMP, it's not standard C but widely used */
    #pragma omp parallel private(nthreads, tid)
    {
        // Get the thread id 
        tid = omp_get_thread_num();
        printf("Hello from thread %d\n", tid);
        
        if (tid == 0)  // This part is only executed by the master thread
        {
            nthreads = omp_get_num_threads();
            printf("Number of threads: %d\n", nthreads);
        }
    }  /* All threads join back to the main process */
    
    return 0;
}
