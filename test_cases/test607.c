
#include <stdio.h>

int main() {
    int val = 10;
    int *ptr = &val;
    int **pptr = &ptr;

    printf("Value of val: %d\n", val);
    printf("Address of val: %p\n", (void *)&val);
    printf("Value of ptr: %p\n", (void *)ptr);
    printf("Address of ptr: %p\n", (void *)&ptr);
    printf("Value of pptr: %p\n", (void *)*pptr);
    printf("Address of pptr: %p\n", (void *)&pptr);
    
    return 0;
}
