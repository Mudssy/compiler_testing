
#include <stdio.h>

int main() {
    int i, *arr[10]; // Declare an array of 10 pointers to integers
    
    for (i = 0; i < 10; ++i) {
        arr[i] = &i; // Store the address of i in each element
    }

    printf("Before modification: ");
    for (i = 0; i < 10; ++i) {
        printf("%d ", *arr[i]); // Print out the value pointed to by each pointer
    }
    printf("\n");
    
    arr[3] = &(i = 25); // Modify a few elements
    arr[7] = &(i = 14);

    printf("After modification: ");
    for (i = 0; i < 10; ++i) {
        printf("%d ", *arr[i]); // Print out the updated values
    }
    printf("\n");
    
    return 0;
}
