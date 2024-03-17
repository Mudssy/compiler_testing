
#include <stdio.h>
#include <stdatomic.h>

int main() {
    _Atomic(int) atomicInt = ATOMIC_VAR_INIT(0);
    
    // Atomic operations using built-in functions, like atomic_load and atomic_fetch_add
    int expected = 0;
    if (atomic_compare_exchange_strong(&atomicInt, &expected, 1)) {
        printf("Successfully changed the value from %d to %d\n", expected, atomic_load(&atomicInt));
    } else {
        printf("Failed to change the value from %d to %d\n", expected, atomic_load(&atomicInt));
    }
    
    return 0;
}
