
#include <stdio.h>

// Define a macro to determine if the compiler supports lvalue-to-rvalue conversion
#define SUPPORTS_LVALUE_TO_RVALUE 1

int main() {
    // Use this feature by defining an array and assigning it to a variable
    int arr[5] = {1, 2, 3, 4, 5};
    
#if SUPPORTS_LVALUE_TO_RVALUE == 0
    printf("This compiler does not support lvalue-to-rvalue conversion.\n");
#else
    int *ptr = (int *) &arr[0]; // Convert the array to a pointer
    printf("%d\n", *ptr); // Print the value of the first element using the converted pointer
    
    ptr += 4; // Move 4 positions in memory
    printf("%d\n", *ptr); // Print the value of the last element using the converted pointer
#endif
    
    return 0;
}
