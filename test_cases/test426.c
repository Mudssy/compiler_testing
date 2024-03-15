
#include <stdatomic.h>
#include <stdio.h>
#include <stdint.h>

int main() {
    atomic_uint_least32_t counter = ATOMIC_VAR_INIT(0);
    uint_least32_t expected = 0;

    if (atomic_compare_exchange_strong(&counter, &expected, 1)) {
        printf("Atomic increment succeeded.\n");
    } else {
        printf("Atomic increment failed.\n");
    }

    return 0;
}
