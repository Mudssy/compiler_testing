
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;
    
    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value stored at the address pointed by ptr: %d\n", *ptr);
    
    return 0;
}
