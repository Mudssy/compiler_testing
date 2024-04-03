
#include <stdio.h>
#define SIZE 1024*1024 // Assuming we are working with a 1MB array

int main() {
    int arr[SIZE];
    
    // Initialize the array with some values
    for (size_t i = 0; i < SIZE; ++i) {
        arr[i] = i % 256;
    }

    // Compute the sum of the array elements
    long long int sum = 0;
    for (size_t i = 0; i < SIZE; ++i) {
        sum += arr[i];
    }
    
    printf("Sum: %lld\n", sum);
    return 0;
}
