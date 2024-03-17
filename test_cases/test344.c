
#include <stdio.h>

// Function to de-interleave elements into two vectors
void deInterleave(int arr[], int size) {
    for (int i = 0; i < 32 / 2; ++i) {
        int mask = (1 << i) - 1;
        
        // Shuffle odd and even indices to one vector each
        for (int j = i; j < size; j += 4) {
            int x = arr[j];
            int y = arr[j + 1];
            int z = arr[j + 2];
            int w = arr[j + 3];
            
            // De-interleave elements
            arr[j] = (x & mask) | ((y & mask) << 1);
            arr[j + 1] = (z & mask) | ((w & mask) << 1);
        }
    }
}

int main() {
    int arr[] = {5, 3, 9, 2, 8, 7, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    deInterleave(arr, size);
    
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
