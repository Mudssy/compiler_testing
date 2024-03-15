
#include <stdio.h>
#include <stdlib.h>
#include "llvmutils/PerfectShuffle.h"

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int *vec1 = (int *) malloc(size / 2 * sizeof(int));
    int *vec2 = (int *) malloc(size / 2 * sizeof(int));
    
    LLVMShuffle(arr, vec1, vec2, size);

    printf("Vector 1: ");
    for (int i = 0; i < size / 2; i++) {
        printf("%d ", vec1[i]);
    }
    printf("\n");
    
    printf("Vector 2: ");
    for (int i = 0; i < size / 2; i++) {
        printf("%d ", vec2[i]);
    }
    printf("\n");

    free(vec1);
    free(vec2);
    
    return 0;
}
