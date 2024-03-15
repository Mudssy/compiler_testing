
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to shuffle an array using the perfect shuffle algorithm
void perfectShuffle(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    srand((unsigned int) time(NULL));
    perfectShuffle(arr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
