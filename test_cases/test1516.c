
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("Size of array: %lu\n", sizeof(arr)); // prints size of the array

    int *ptr = arr; // decaying array to pointer

    for (int i = 0; i < sizeof(arr)/sizeof(int); ++i) {
        printf("%d ", ptr[i]);  // printing array using decayed pointer
    }
    
    return 0;  // returning from main function, not going into an infinite loop
}
