
#include <stdio.h>

struct empty {};

int main() {
    printf("Size of empty struct: %zu\n", sizeof(struct empty));
    
    // Empty array test (zero-length)
    int arr1[0];
    printf("Size of zero length array: %zu\n", sizeof(arr1));

    // Flexible array member test
    struct flexible_array {
        int size;
        double data[];
    };
    
    int flexibleArraySize = 5;
    struct flexible_array *ptr = (struct flexible_array *)malloc(sizeof(struct flexible_array) + flexibleArraySize * sizeof(double));
    printf("Size of flexible array member: %zu\n", sizeof(*ptr)); // prints 8 on my machine because the size of a pointer is 8 bytes. It won't be equal to flexibleArraySize*sizeof(double).
    
    ptr->size = flexibleArraySize;
    for (int i = 0; i < flexibleArraySize; i++) {
        ptr->data[i] = 1.0 + i;
    }
    
    // Print the values to verify
    printf("Flexible array members: ");
    for (int i = 0; i < flexibleArraySize; i++) {
        printf("%f ", ptr->data[i]);
    }
    printf("\n");
    
    free(ptr);
    return 0;
}
