
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int num_threads, tid;

    #pragma omp parallel private(tid) shared(num_threads)
    {
        tid = omp_get_thread_num();
        if (tid == 0) {
            num_threads = omp_get_num_threads();
            printf("Number of threads: %d\n", num_threads);
        }
        printf("Hello from thread: %d\n", tid);
    }

    return EXIT_SUCCESS;
}
