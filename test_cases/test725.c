
#include <stdio.h>

// This is an inline function
static __attribute__((always_inline)) int testInlineFunc() {
    return 1;
}

int main(void) {
    printf("Inline function stub support: %s\n", (testInlineFunc() == 1 ? "Supported" : "Not supported"));
    return 0;
}
