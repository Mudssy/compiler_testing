
#include <stdio.h>

// Function to print array elements
void print_array(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N=16; // size of the vector to be shuffled. 
              // Please note that the length must be a power of 2.
    int arr[N];
    for(int i=0; i<N; ++i) {
        arr[i] = i+1;
    }
    
    printf("Original Array:\n");
    print_array(arr, N);

    // Your OpenMP code goes here
    #pragma omp simd
    for (int j = 0; j < N/2; ++j) { 
        int temp = arr[j];
        arr[j] = arr[N-1-j];
        arr[N-1-j] = temp;
    }
    
    printf("Shuffled Array:\n");
    print_array(arr, N);
    
    return 0;
}
