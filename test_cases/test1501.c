
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;  // Address-of operator (&)
    
    printf("Address of x is %p\n", ptr);
    printf("Value at the address pointed by ptr is %d\n", *ptr);  // Pointer dereference (*)

    return 0;
}
