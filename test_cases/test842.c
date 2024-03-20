
#include <stdio.h>
#include <stdatomic.h>

int main() {
    _Atomic(int) counter = 0;
    
    // Increment the counter using atomic operations
    for (int i = 0; i < 1000000; ++i) {
        atomic_fetch_add(&counter, 1);
    }

    // Print out the final value of the counter
    printf("Counter: %d\n", atomic_load(&counter));
    
    return 0;
}
