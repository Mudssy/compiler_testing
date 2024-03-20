
#include <stdio.h>
#include <omp.h>

int main() {
    int i, arr[10];
    
    // Initialize array with values from 0 to 9
    for(i=0; i<10; ++i) {
        arr[i] = i;
    }

    #pragma omp parallel num_threads(2) shared(arr)
    {
        int id = omp_get_thread_num();
        
        // Perform a shuffle operation and check if the original order is preserved
        #pragma omp for ordered schedule(static,1) nowait
        for (i = 0; i < 10; ++i){
            int temp = arr[i];
            #pragma omp ordered
            { 
                printf("Thread %d: arr[%d] = %d\n", id, i, temp);
                
                // Wait for all threads to finish printing before continuing
                #pragma omp barrier
            }
        }
    }
    
    return 0;
}
