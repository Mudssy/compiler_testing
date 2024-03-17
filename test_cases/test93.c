
#include <stdio.h>

int main() {
    int x = 10;
    printf("The value of x is %d\n", x);
    
    // Using & to get the address of x
    int *ptr = &x;
    
    printf("The address of x is %p\n", (void*)ptr);

    return 0;
}
