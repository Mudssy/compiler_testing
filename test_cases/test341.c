
#include <stdio.h>
#include "llvmutils/PerfectShuffle.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (size_t i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    
    llvmutils_PerfectShuffle(arr, len);
    
    printf("\nAfter shuffle: ");
    for (size_t i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
