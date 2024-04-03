
#include <stdio.h>
#include <inttypes.h>

void* __attribute__((noinline)) getStackPointer() {
    register void *sp asm("sp");
    return sp;
}

void dump_stack(unsigned level) {
    if (level == 0) {
        printf("%p\n", __builtin_return_address(0));
        return;
    }
    
    unsigned char dummy;
    dump_stack(level - 1);
}

int main() {
    const int max_depth = 10;
    printf("Stack pointer: %p\n", getStackPointer());
    dump_stack(max_depth);
    return 0;
}
