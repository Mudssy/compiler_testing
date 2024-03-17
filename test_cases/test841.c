
#include <stdio.h>
#include <stdint.h>

void test_restricted_pointers(const int *restrict ptr1, const int *restrict ptr2) {
    printf("Pointer 1: %p\n", (void *)ptr1);
    printf("Pointer 2: %p\n", (void *)ptr2);
}

int main() {
    const int a = 42;
    const int b = 23;
    test_restricted_pointers(&a, &b);
    return 0;
}
