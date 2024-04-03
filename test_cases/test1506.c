
#include <stdio.h>

int main() {
    int n = 5;  // Size of array, can be changed to test different outputs
    
    // Declare a VLA with size n
    int arr[n];  
    
    for (int i=0; i<n; ++i) {
        arr[i] = i+1;  // Initialize the array elements
    }
    
    printf("The elements of the array are:\n");
    
    for (int i=0; i<n; ++i) {
        printf("%d ", arr[i]);   // Print out each element
    }
    
    return 0;
}
