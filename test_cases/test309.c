
#include <stdio.h>
#include <omp.h>  // Make sure you have omp.h in your project, if it's not you can download it and add to your include path

int main()  {  
    int num_procs;
    
    #pragma omp parallel 
    {
        num_procs = omp_get_num_procs(); // Get the number of processors that are available to the program 
        
        printf("Number of processors: %d\n", num_procs); // Print the number of processors
     }  
     
    return 0;
}
