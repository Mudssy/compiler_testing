
#include <stdio.h>
#include <stdatomic.h>

atomic_int lock;

void function() {
    _Atomic int *lock_ptr = &lock;
    while (atomic_flag_test_and_set(lock_ptr) != 0);
    printf("Function executed.\n");
    atomic_flag_clear(lock_ptr);
}

int main() {
    function();
    return 0;
}
