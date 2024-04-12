
#include <stdio.h>

int main(void) {
    int x = 5, y = 10;
    int *ptr_x = &x;
    int *ptr_y = &y;
    
    printf("Initial values:\n");
    printf("x: %d\ty: %d\n", x, y);
    printf("*ptr_x: %p\t*ptr_y: %p\n", (void *) ptr_x, (void *) ptr_y);
    
    // Pointer arithmetic
    ptr_x++;  // Increment pointer
    *ptr_y = 20;  // Change the value at location pointed by pointer
    
    printf("After increment and dereference:\n");
    printf("x: %d\ty: %d\n", x, y);
    printf("*ptr_x: %p\t*ptr_y: %p\n", (void *) ptr_x, (void *) ptr_y);
    
    return 0;
}
