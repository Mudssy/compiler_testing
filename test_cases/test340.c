
#include <stdio.h>
#include <immintrin.h>  // for llvm_utils shuffles

void printArr(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; ++i) {
        printf("%d", arr[i]);
        if (i + 1 != size) {
            printf(", ");
        }
    }
    printf("]\n");
}

void testShuffle() {
    const int size = 8;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    
    printf("Before shuffling: ");
    printArr(arr, size);
    
    llvmutilsPerfectShuffle(arr, sizeof(int) * size);

    printf("After shuffling: ");
    printArr(arr, size);
}

int main() {
    testShuffle();
    return 0;
}
