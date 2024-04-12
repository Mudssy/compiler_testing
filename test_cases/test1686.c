
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x; // Declaring a pointer to an integer and initializing it with the address of x
    
    printf("Value of x : %d\n", x); // Prints: Value of x : 10
    printf("Address of x (&x) : %p\n", &x); // Prints: Address of x (&x) : some hexadecimal address
    printf("Value stored in p (*p): %d\n", *p); // Prints: Value stored in p (*p): 10
    
    return 0;
}
