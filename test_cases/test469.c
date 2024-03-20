
#include <stdint.h>
#include <assert.h>

typedef uint32_t __attribute__((aligned(16))) aligned_uint32_t;

int main() {
    // Test assume_aligned
    aligned_uint32_t a[4] = {0xdeadbeef, 0xcafebabe, 0xfabecafe, 0xf00df00d};

    uint64_t *unaligned_ptr = (uint64_t *) &a[1];
    assert(__builtin_expect(*unaligned_ptr == 0xfabecafe, 0));

    aligned_uint32_t __attribute__((assume_aligned(16))) *aligned_ptr = unaligned_ptr;
    assert(__builtin_expect(*aligned_ptr == 0xdeadbeef, 0));

    return 0;
}
