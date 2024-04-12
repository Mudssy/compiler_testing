
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    
    // Test 1: Pointer arithmetic
    printf("Address of x: %p\n", (void *)&x);
    printf("Value of p: %p\n", (void *)p);
    printf("Dereferencing p: %d\n", *p);
    
    // Test 2: Serialization/Deserialization of pointers
    void *v = (void *)p;
    int *q = (int *)v;
    printf("Value at q after deserializing from v: %d\n", *q);

    return 0;
}
