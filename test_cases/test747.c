
#include <stdio.h>

void __attribute__((malloc)) custom_allocator(size_t size) {
    void* ptr = malloc(size);
    printf("Allocated memory of size %zu: %p\n", size, ptr);
}

int main() {
    custom_allocator(1024);
    return 0;
}
