
#include <omp.h>

int main() {
    #pragma omp parallel num_threads(2)
    {
        int thread_id = omp_get_thread_num();
        printf("Hello from thread %d\n", thread_id);
    }
    return 0;
}
