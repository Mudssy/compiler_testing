
#include <stdatomic.h>

void lock_acquired(int, void*, void*);
void lock_released(int, void*, void*);

atomic_int global = 0;
atomic_flag lock = ATOMIC_FLAG_INIT;

int main() {
    atomic_thread_fence(memory_order_acquire); // Locks Acquired Before Attribute
    
    if (!atomic_load(&global)) {
        while (atomic_flag_test_and_set(&lock)) {} // acquire lock
        
        if (!atomic_load(&global)) {
            atomic_store(&global, 1);
            lock_acquired(0, NULL, NULL); // Locks Acquired After Attribute
        }
    }
    
    lock_released(0, NULL, NULL); // Locks Released Attribute
    
    return 0;
}
