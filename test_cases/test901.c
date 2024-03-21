
#include <stdio.h>
#include <omp.h>

void print_loop(int i) {
    printf("Iteration %d on thread %d\n", i, omp_get_thread_num());
}

int main() {
    int loop_size = 10; // This value should be a multiple of the number of available cores for effective testing.
    
    #pragma omp parallel for schedule(static)
    for (int i=0; i<loop_size; i++){
        print_loop(i);
    }

    return 0;
}
