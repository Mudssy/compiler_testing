
#include <stdio.h>
#include <time.h>

void hot_function() {
    for (int i = 0; i < 100000000; ++i) {}
}

void cold_function() {
    for(int i=0; i<1000000; ++i){}
}

int main() {
    clock_t start, end;
    double cpu_time_used;
    
    printf("Starting hot function...\n");
    start = clock();
    hot_function();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Hot function took %f seconds.\n", cpu_time_used);
    
    printf("Starting cold function...\n");
    start = clock();
    cold_function();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Cold function took %f seconds.\n", cpu_time_used);
    
    return 0;
}
