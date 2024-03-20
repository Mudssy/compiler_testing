
#include <stdio.h>
#include <omp.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int result[5];
    int i;

    #pragma omp parallel for default(none) shared(arr, result) private(i)
    for (i = 0; i < 5; ++i) {
        result[i] = arr[i];
    }
    
    // Check if all elements are duplicated correctly.
    int success = 1;
    for (i = 0; i < 5; ++i) {
        if (arr[i] != result[i]) {
            printf("Mismatch at index %d: Expected %d, got %d\n", i, arr[i], result[i]);
            success = 0;
        }
    }
    
    if (success) {
        printf("All elements were duplicated correctly.\n");
    } else {
        printf("There was a mismatch in the duplication process.\n");
    }
    
    return 0;
}
