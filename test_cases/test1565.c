
#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    
    ptr = &arr[2]; // Pointer points to the third element of the array.
    printf("%d\n", *ptr); // Prints the value at the address stored by ptr which is arr[2] -> prints 30.
    printf("%lu\n", (unsigned long)(&arr[4] - &arr[1])); // Prints the difference between two pointers, they should be 3 as there are three elements between them.
    
    return 0;
}
