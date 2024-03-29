
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    int i = 0;

    start = clock();
    
    for(i=0; i<100000000; i++);  // Change this to modify the test case
  
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("The loop took %f seconds to execute\n", cpu_time_used);
    
    return 0;
}
