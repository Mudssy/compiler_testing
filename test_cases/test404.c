
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    printf("Address of first element (arr): %p\n", arr);
    printf("Value at first element: %d\n", *(arr));
    
    // Pointer Arithmetic
    printf("Address of second element (ptr + 1): %p\n", ptr + 1);
    printf("Value at second element: %d\n", *(ptr + 1));
    printf("Address of third element (ptr + 2): %p\n", ptr + 2);
    printf("Value at third element: %d\n", *(ptr + 2));
    
    return 0;
}
