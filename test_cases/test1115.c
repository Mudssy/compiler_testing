
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value stored in pointer ptr: %d\n", *ptr);
    printf("Address stored in pointer ptr: %p\n", (void *)ptr);
    
    return 0;
}
