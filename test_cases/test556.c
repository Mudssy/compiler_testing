
#include <stdio.h>
#include <omp.h>

int main() {
    int i;
    const int num_threads = 4;

    omp_set_num_threads(num_threads);

    #pragma omp parallel private(i)
    {
        i = omp_get_thread_num();
        printf("Hello from thread %d\n", i);
    }

    return 0;
}
