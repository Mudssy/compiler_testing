
#include <stdio.h>
#include <stdint.h>

void __attribute__((noinline)) print_pd(uint64_t pd) {
    for (size_t i = 0; i < 8 * sizeof(pd); ++i)
        putchar('0' + !!(pd & 1ULL << i));
}

int main() {
    uint64_t pd = __builtin_pdsad((uint64_t)(void *)&main, (uint64_t)(void *)"test");
    printf("Scalable Profile Data: ");
    print_pd(pd);
    putchar('\n');
    
    return 0;
}
