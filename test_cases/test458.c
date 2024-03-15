
#include <stdio.h>
#include <stdalign.h>

int main(void) {
    alignas(128) char aligned_buffer[10];
    printf("Address of aligned buffer: %p\n", (void *)aligned_buffer);
    return 0;
}
