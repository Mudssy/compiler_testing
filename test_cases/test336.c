
#include <stdio.h>
#include <omp.h>

int main() {
    int i;
    
    // Loop through powers of 2 up to a certain limit
    for (i = 0; i < 8; ++i) {
        int n = (1<<i);   // Power-of-two size vector
        
        #pragma omp parallel num_threads(n)
        {
            int threadId = omp_get_thread_num();
            
            // Generate a test case for each power of two sized vector and print the result
            printf("Test case %d: %d threads, %d length. Result: %d\n", 
                    i + 1, n, n, __builtin_ctz(threadId));
        }
    }
    
    return 0;
}
