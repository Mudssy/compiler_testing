
#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr;

    // Testing pointer addition and subtraction:
    ptr = &array[3];  // Points to the fourth element of the array.
    printf("Element at index 3 is %d\n", *ptr);
    ++ptr;             // Increment the pointer (points to the next element).
    printf("The next element is %d\n", *ptr);
    --ptr;             // Decrement the pointer (back to the original position).
    printf("Element at index 3 after decrementing is %d\n", *ptr);
    
    ptr += 2;          // Addition of integer to a pointer.
    printf("Pointer now points to the fifth element, which is %d\n", *ptr);
    ptr -= 1;          // Subtraction of integer from a pointer.
    printf("Now it points back to the fourth element, which is %d\n", *ptr);
    
    return 0;
}
