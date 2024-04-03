
#include <stdio.h>
#ifdef _OPENMP
    #include <omp.h>
#endif

int main() {
    int n = 10;
    omp_set_num_threads(4); // sets the number of threads to use

    #pragma omp parallel 
    {
        for (int i=0; i<n; i++) {
            printf("Thread %d is running iteration %d\n", omp_get_thread_num(), i);
         }
     }
}
