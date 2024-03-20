
#include <stdio.h>
#define ARRAY_SIZE 1000000

int main() {
    int i;
    
    // Declare two arrays with volatile attribute to prevent compiler optimizations
    volatile char array1[ARRAY_SIZE];
    volatile char array2[ARRAY_SIZE];
    
    // Loop and write something to these arrays multiple times. 
    for(i = 0; i < ARRAY_SIZE; ++i) {
        array1[i] = 'A';
    }

    for(i = 0; i < ARRAY_SIZE; ++i) {
        array2[i] = 'B';
    }
    
    // Clear the cache by accessing some unrelated memory
    char *p = (char *) malloc(1); 
    free(p);

    return 0;
}
