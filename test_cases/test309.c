
#include <stdio.h>
#include <omp.h>  // Make sure you have omp.h included to access OpenMP functions

int main(void) {
    int num_threads = omp_get_max_threads(); // Get the maximum number of threads that could be used in a parallel region
    
    printf("Maximum number of threads: %d\n", num_threads); 

    #pragma omp parallel // This directive tells OpenMP to create a team of threads. Each thread will execute the enclosed code independently 
    {
        int id = omp_get_thread_num(); // Returns the unique thread ID within the current team.
        
        printf("Hello world from thread %d\n", id); // Print a message for each thread 
    
        if (id == 0) {  // Only master thread will execute this block
            int num_procs = omp_get_num_procs(); // Get the number of processors that are available to the program 
            
            printf("Number of processors: %d\n", num_procs); // Print the number of processors 
        } 
    }  
    
    return 0; 
}
