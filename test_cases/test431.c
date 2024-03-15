
#include <stdio.h>
#include <stdlib.h>

int main() {
    int val = 0;
    char *ptr = (char *) &val;
    
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of ptr: %zu\n", sizeof(void*));
    printf("Little Endian: %d\n", *((char *)&val) == val);
    printf("Big Endian: %d\n", (*ptr == 0) != (*(ptr + sizeof(int) - 1) == 0));
    
    return 0;
}
