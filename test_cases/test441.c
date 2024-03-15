
#include <stdio.h>

int main(void) {
    _Atomic int atomic_var = 0;

    printf("Before: %d\n", atomic_load(&atomic_var));
    atomic_store(&atomic_var, 42);
    printf("After: %d\n", atomic_load(&atomic_var));

    return 0;
}
