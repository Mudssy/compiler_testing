
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Access using subscript notation
    printf("%d ", arr[0]);  // Prints: 10
    
    // Access using pointer arithmetic
    int* ptr = &arr[0];
    printf("%d ", *(ptr + 3));  // Prints: 40
    
    // Access using indexing behavior
    int i = 2;
    printf("%d ", arr[i]);  // Prints: 30
    
    return 0;
}
