
#include <stdio.h>

int main() {
    int i = 10;  // integer variable
    int *ptr = &i; // pointer to integer
    int **pptr = &ptr; // pointer to a pointer
    
    printf("%d\n", **pptr);  // prints the value of 'i' (should be 10)
    printf("%p\n", ptr);   // prints the address of 'i'
    printf("%p\n", *pptr); // prints the same address as above
    
    return 0; // main function should always return
}
