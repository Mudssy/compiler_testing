
#include <stdio.h>
#include <omp.h>

int main() {
    int i;
    
    #pragma omp parallel private(i)  // Initiate a parallel region
    {
        int id = omp_get_thread_num();  // Get the ID of the current thread
        
        printf("Hello from thread %d\n", id);  // Print the thread ID
    }  
    
    return 0;
}
