
#include <stdio.h>

int main() {
    _Atomic int atomic_var = 10;  // Atomic variable declaration using the Flatten Attributes feature

    printf("Before incrementing, atomic_var = %d\n", atomic_var);

    __atomic_add_fetch(&atomic_var, 5, __ATOMIC_SEQ_CST);  // Increment atomic variable

    printf("After incrementing by 5, atomic_var = %d\n", atomic_var);

    return 0;
}
