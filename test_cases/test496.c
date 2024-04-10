
#include <stdatomic.h>
#include <stdio.h>

int main() {
    // Initialize atomic counter to 1 (lock is available)
    _Atomic(int) counter = 1;

    if (_Generic(_InterlockedCompareExchange(&counter, 0, 1), default: -1) == 1) {
        printf("Lock acquired\n");
        
        // Place your code here that requires the lock
        printf("Performing action while lock is held...\n");
        
        printf("Lock released\n");
        _InterlockedExchange(&counter, 1);
    } else {
        printf("Failed to acquire lock\n");
    }
    
    return 0;
}
