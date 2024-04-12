
#include <stdatomic.h>
#include <stdio.h>

int main() {
    // Testing basic atomic types
    _Atomic(int) atom_i = 0;
    _Atomic(float) atom_f = 3.14f;
    
    // Testing atomic operations
    printf("Before operation, atom_i = %d\n", atom_i);
    atomic_fetch_add(&atom_i, 5);  // atom_i += 5
    printf("After add operation, atom_i = %d\n", atom_i);
    
    printf("\nBefore operation, atom_f = %.2f\n", atom_f);
    atomic_fetch_add(&atom_f, 10.3f);  // atom_f += 10.3
    printf("After add operation, atom_f = %.2f\n", atom_f);
    
    return 0;
}
