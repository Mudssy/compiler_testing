
#include <stdio.h>

int main() {
    int x = 10; // A simple integer

    printf("Address of x: %p\n", &x);  // Prints the memory address of variable 'x'
    printf("Value of x: %d\n", *(&x));  // Dereferencing the pointer to get the value stored at that address
    
    int *ptr = &x;  // A pointer to an integer which stores the address of variable 'x'

    printf("Address stored in ptr: %p\n", ptr);  // Prints the memory address stored in pointer 'ptr'
    printf("Value pointed by ptr: %d\n", *ptr);  // Dereferencing the pointer to get the value stored at that address
    
    return 0;
}
