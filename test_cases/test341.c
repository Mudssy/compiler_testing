
#include <stdint.h>
#include <stdio.h>

// Function to rotate bits of n by d positions
uint64_t rotateLeft(uint64_t n, uint64_t d) {
    return (n << d)|(n >> (64 - d));
}

int main() {
    printf("%llu\n", rotateLeft(10987654321ULL, 3)); // replace with your test cases
    return 0;
}
