
#include <stdio.h>

int main() {
    printf("Testing Profile Data Compression feature.\n");
    
    // Test case 1: Print out the size of different data types
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of float: %lu\n", sizeof(float));
    
    // Test case 2: Print out the value of a pointer
    int x = 5;
    int *ptr = &x;
    printf("Value pointed by ptr: %d\n", *ptr);
    
    return 0;
}
