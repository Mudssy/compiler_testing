
#include <stdio.h>

int main() {
    int i = 10;
    volatile int *ptr = &i; // This pointer is volatile
    
    printf("Initial value: %d\n", *ptr);
    
    *ptr = 20;  // This is a volatile store, and won't be optimized away.
                // The '=' operation itself is not an actual assignment, just showing it with the volatile keyword
    printf("After first assignment: %d\n", *ptr);

    i = 30;  // This is a non-volatile store, could be optimized away if we know nothing else about 'i'.
            // The compiler might replace this with some other operation.
    printf("After second assignment: %d\n", *ptr);
    
    return 0;
}
