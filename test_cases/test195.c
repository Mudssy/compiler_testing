
#include <stdio.h>
#include <stdatomic.h>

int main(void) {
    _Atomic int x = 0; // initialize atomic integer
    
    atomic_store(&x, 42); // set the value of x to 42 atomically
    
    printf("%d\n", atomic_load(&x)); // print the value of x (should be 42)
    
    return 0;
}
