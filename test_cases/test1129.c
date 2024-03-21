
#include <stdio.h>
#include <stdatomic.h>

int main() {
    _Atomic(int) atomicInt = ATOMIC_VAR_INIT(5);
    
    printf("Initial value: %d\n", atomicInt);
    
    int expected = 5;
    if (atomic_compare_exchange_strong(&atomicInt, &expected, 10)) {
        printf("Successfully replaced the value with 10.\n");
    } else {
        printf("Failed to replace the value. Current value: %d\n", atomicInt);
    }
    
    if (atomic_compare_exchange_strong(&atomicInt, &expected, 20)) {
        printf("Successfully replaced the value with 20.\n");
    } else {
        printf("Failed to replace the value. Current value: %d\n", atomicInt);
    }
    
    return 0;
}
