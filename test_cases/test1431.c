
#include <stdio.h>
#include <stdint.h>

void __attribute__((noinline)) print_pd(uint64_t pd) {
    for (size_t i = 0; i < 8 * sizeof(uint64_t); ++i) {
        printf("%c", (pd & 1) ? '*' : '.');
        pd >>= 1;
    }
}

void __attribute__((noinline)) foo() {}

int main(void) {
    for (size_t i = 0; i < 128; ++i) {
        uint64_t pd = __builtin_profile_data();
        if (pd != 0) {
            print_pd(pd);
            printf("\n");
        }
        foo();
    }
}
