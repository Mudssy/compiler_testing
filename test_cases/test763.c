
#include <stdio.h>

void __attribute__((gnu_inline, always_inline)) gnuInlineFunc() {
    asm("nop");
}

int main(void) {
    gnuInlineFunc();
    printf("Testing GNU Inline Function\n");
    return 0;
}
