
#include <stdatomic.h>

void lock_acquired(int, void*, void*);
void lock_released(int, void*, void*);

int main() {
    // Initialize the atomic counter to 1 (lock is available)
    atomic_int counter = 1;
  
    // Acquire the lock by decrementing the counter
    int oldValue = atomic_fetch_sub(&counter, 1);
    if(oldValue == 0){
        printf("Lock acquired\n");
        lock_acquired(0, NULL, NULL);
    }else{
        printf("Failed to acquire lock\n");
    }
  
    // Release the lock by incrementing the counter
    oldValue = atomic_fetch_add(&counter, 1);
    if(oldValue < 0){
        printf("Lock released\n");
        lock_released(0, NULL, NULL);
    }else{
        printf("Failed to release lock\n");
    }
  
    return 0;
}
