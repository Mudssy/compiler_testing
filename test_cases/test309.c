
#include <stdio.h>
#include <omp.h>

int main() {
    int num_threads = 0;

    #pragma omp parallel
    {
        if (omp_get_thread_num() == 0) {
            num_threads = omp_get_num_threads();
        }
    }

    printf("The number of threads used: %d\n", num_threads);

    return 0;
}
