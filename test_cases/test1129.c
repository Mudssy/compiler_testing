
#include <stdio.h>
#include <stdatomic.h>

int main() {
    _Atomic int counter = 0;
    printf("Before increment: %d\n", atomic_load(&counter));
    atomic_fetch_add(&counter, 1);
    printf("After increment: %d\n", atomic_load(&counter));
    return 0;
}
