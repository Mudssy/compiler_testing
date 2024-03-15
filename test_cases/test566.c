
#include <stdio.h>

const int const_var = 5;
volatile int volatile_var = 10;
int *restrict restrict_ptr = &const_var;
_Atomic int atomic_var = 15;

int main() {
    printf("const: %d\n", const_var);
    printf("volatile: %d\n", volatile_var);
    *restrict_ptr = 20; // This change should not be reflected in const_var
    printf("restrict: %d, %d\n", const_var, *restrict_ptr);
    atomic_var++;
    printf("_Atomic: %d\n", atomic_var);
    return 0;
}
