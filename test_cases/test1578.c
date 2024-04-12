
#include <stdio.h>

int main() {
    // Allocate an array on the stack
    int arr[10];

    // Use pointer arithmetic to access memory locations directly
    for (int i = 0; i < 10; i++) {
        *(arr + i) = i;
    }

    // Print out the values in the array
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(arr + i));
    }

    return 0;
}
