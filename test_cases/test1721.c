
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    
    // Allocate memory for an array of 10 integers
    int* arr = (int*)malloc(sizeof(int) * 10);

    // Generate and print out the random numbers
    srand(42);  // seed the random number generator with a constant value to make it deterministic
    for(i = 0; i < 10; ++i) {
        arr[i] = rand();
        printf("%d\n", arr[i]);
    }
    
    // Free the allocated memory
    free(arr);

    return 0;
}
