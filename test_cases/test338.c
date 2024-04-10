
#include <stdio.h>
#include <time.h>   // for time()
#include <stdlib.h> // for rand(), srand()

void perfectShuffle(int *arr, int n) {
    if (n > 1) {
        srand((unsigned int) time(NULL));  // seed the random number generator with current time

        for (int i = 0; i < n - 1; ++i) {
            int j = i + rand() / (RAND_MAX / (n - i) + 1);  // generate a random index
            
            // swap arr[j] and arr[i]
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    
    perfectShuffle(array, size);
    printArray(array, size);
    
    return 0;
}
