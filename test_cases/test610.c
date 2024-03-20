
#include <stdio.h>

int main() {
    void *ptr = NULL;  // Void pointer declaration
    
    printf("Address of ptr: %p\n", &ptr);
    printf("Value of ptr (NULL): %p\n", ptr);

    int a = 10;
    ptr = &a;  // Assigning address of 'int' variable to void pointer.
    
    printf("\nAddress of a: %p\n", &a);
    printf("Value of ptr (address of a): %p\n", ptr);
    printf("Value pointed by ptr (value of a): %d\n", *(int*)ptr);
    
    return 0;
}
