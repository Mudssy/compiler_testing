
#include <stdio.h>
#include <omp.h> 

int main() {
    int i;
    
    #pragma omp parallel num_threads(4) private(i) 
    {
        #pragma omp for schedule(static) ordered
        for (i = 0; i < 16; ++i) {
            #pragma omp ordered
            printf("%d : %d\n", omp_get_thread_num(), i);
        }
    }
    
    return 0;
}
