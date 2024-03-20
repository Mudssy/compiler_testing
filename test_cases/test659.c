
#include <stdio.h>
#include <stdatomic.h>

int main(void) {
    _Atomic(int) a = 0;
    
    atomic_store(&a, 42);
    int b = atomic_load(&a);
    
    printf("Value: %d\n", b);
    
    return 0;
}
