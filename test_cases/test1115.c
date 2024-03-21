
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = &arr[0]; // Pointer to first element of the array

    printf("Value at p: %d\n", *p);
    ++p; // Move to next memory location (element)
    printf("Value at p+1: %d\n", *p);
    --p; // Return back to original memory location
    printf("Value at p-1: %d\n", *p);

    return 0;
}
