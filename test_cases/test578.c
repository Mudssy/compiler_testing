
#include <stdio.h>

void print_pointer(int *ptr) {
    if (ptr != NULL) {
        printf("Pointer value: %p\n", ptr);
        printf("Dereferenced pointer: %d\n", *ptr);
    } else {
        printf("Null Pointer.\n");
    }
}

int main() {
    int x = 10;
    int y = 20;
    
    // Test & operator
    print_pointer(&x);
    
    // Test * operator on a NULL pointer
    print_pointer(NULL);
    
    // Assigning address of 'y' to pointer variable 'p' using '&' operator.
    int* p = &y;
  
    printf("Address stored in p: %p\n", p);
    printf("Value pointed by the pointer p: %d\n", *p);
    
    // Assigning address of 'x' to pointer variable 'q'.
    int* q = &x;
  
    printf("Address stored in q: %p\n", q);
    printf("Value pointed by the pointer q: %d\n", *q);
    
    return 0;
}
