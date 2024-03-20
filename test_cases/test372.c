
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Testing pointer to array
    int* ptr_arr = arr;
    printf("Pointer to Array: %d\n", *ptr_arr);

    // Testing pointer arithmetic
    for(int i=0; i<5; i++) {
        printf("Array[%d] via Pointer Arithmetic: %d\n", i, *(ptr_arr+i));
    }
    
    // Testing null pointers
    int* ptr = NULL;
    if(!ptr) {
      printf("Null pointer test passed.\n");
    } else {
      printf("Null pointer test failed.\n");
    }

    return 0;
}
