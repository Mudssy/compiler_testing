
#include <stdatomic.h>
#include <stdio.h>

int main() {
    atomic_int counter = ATOMIC_VAR_INIT(0);

    printf("Before: %d\n", atomic_load(&counter));

    atomic_fetch_add(&counter, 1);
    
    printf("After: %d\n", atomic_load(&counter));

    return 0;
}
