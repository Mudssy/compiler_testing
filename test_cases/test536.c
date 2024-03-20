
#include <stdio.h>
#include <inttypes.h>

void* get_return_address() {
    void *addr = __builtin_extract_return_addr(__builtin_return_address(0));
    return addr;
}

void* get_frame_address() {
    return __builtin_frame_address(0);
}

int main() {
    printf("Return address: %p\n", get_return_address());
    printf("Frame address: %p\n", get_frame_address());

    return 0;
}
