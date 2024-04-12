
#include <stdio.h>
#include <stdatomic.h>

int main() {
    // Test atomic integer
    _Atomic(int) atomic_var = ATOMIC_VAR_INIT(0);
    
    // Perform some operations on the atomic variable
    atomic_fetch_add(&atomic_var, 1);
    printf("%d\n", atomic_load(&atomic_var));
    
    return 0;
}
