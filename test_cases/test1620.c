
#include <omp.h>
#include <stdio.h>

int main() {
    int num_threads = 4; // Number of threads for parallel execution
    omp_set_num_threads(num_threads);

    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        printf("Hello from thread %d, nthreads %d\n", id, num_threads);
    }
    
    return 0;
}
