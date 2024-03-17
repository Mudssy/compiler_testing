
#include <stdio.h>
#include <stdlib.h>

void *getNonNullPtr(void) __attribute__((returns_nonnull));

void *getNonNullPtr(void) {
    return (void *)0xDEADBEEF;
}

int main() {
    void *ptr = getNonNullPtr();
    printf("Pointer returned by getNonNullPtr: %p\n", ptr);
    return 0;
}
