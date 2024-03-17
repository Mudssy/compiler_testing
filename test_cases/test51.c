
#include <stdio.h>

int main() {
    int number = 10; // an integer variable
    int *ptr; // declaring a pointer to an integer variable
    
    ptr = &number; // storing address of 'number' in the pointer 

    printf("Address stored in pointer is: %p\n", ptr); // printing out the address stored in the pointer using '%p' format specifier.
    printf("Value pointed to by the pointer is: %d\n", *ptr); // printing out value pointed to by 'ptr' using '*ptr' notation.

    return 0;
}
