
#include <stdio.h>
#include <string.h>

struct test {
    unsigned int x : 1; // Specify bit field of size 1. This should pack the struct to only 4 bytes on a 32-bit system.
};

int main() {
    printf("Size of structure: %lu\n", sizeof(struct test));
    return 0;
}
