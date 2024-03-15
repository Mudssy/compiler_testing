
#include <stdio.h>
#include <stdlib.h>
#include <stdatomic.h>

atomic_int acq_before;

void increment(void) {
    atomic_fetch_add(&acq_before, 1);
}

int main() {
    acq_before = 0;
    increment();
    int value = atomic_load(&acq_before);
    printf("Value after increment: %d\n", value);
    return 0;
}
