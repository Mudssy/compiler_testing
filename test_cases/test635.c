
#include <stdio.h>

int main() {
    // Testing multi-dimensional array allocation
    int n = 3;
    int m = 4;
    int l = 5;
    
    // Allocate a 3D array
    int (*array)[m][l] = malloc(n * sizeof(*array));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < l; ++k) {
                // Assign values using pointer arithmetic
                *(*(*(array + i) + j) + k) = i + j + k;
            }
        }
    }
    
    // Print the array for debugging purposes
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < l; ++k) {
                printf("array[%d][%d][%d] = %d\n", i, j, k, *(*(*(array + i) + j) + k));
            }
        }
    }
    
    // Free the allocated memory
    free(array);
}
