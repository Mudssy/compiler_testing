
#include <stdio.h>

int main() {
    void *frame_address = __builtin_frame_address(0);
    printf("Frame address: %p\n", frame_address);
    return 0;
}
