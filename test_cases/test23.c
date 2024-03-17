
#include <stdio.h>

int main(void) {
    int i = 5;
    int arr[i]; // Declare variable length array

    for (int j=0; j<i; ++j) { // Initialize array with some values
        arr[j] = j * 2;
    }
    
    printf("Array Contents:\n");
    for(int j=0; j<i; ++j) { // Print out array contents
        printf("%d ", arr[j]);
    }
    
    return 0;
}
