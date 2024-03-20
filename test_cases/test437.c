
#include <stdio.h>

int main(void) {
    int n = 10;
    int array[n]; // Declare an array with the variable length
    
    for (int i = 0; i < n; ++i) {
        array[i] = i * 2; // Fill the array
    }

    printf("Array elements: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]); // Print out the array elements
    }
    
    return 0; // Signal to the operating system that the program has ended successfully
}
