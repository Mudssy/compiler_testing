
#include <stdio.h>
#ifndef _OPENMP
    #error "OpenMP library not found"
#endif
int main() {
    int i;
    #pragma omp parallel for private(i)
    for (i = 0; i < 10; i++) {
        printf("This is iteration number %d executed by thread %d\n", i, omp_get_thread_num());
    }
    return 0;
}
