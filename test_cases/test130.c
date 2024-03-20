
#include <stdio.h>
#define STATIC_ASSERT(condition) int static_assertion[(condition)?1:-1]

STATIC_ASSERT(sizeof(int) == 4); // replace this with your feature to be tested

int main() {
    printf("If you see this message, the compiler supports _Static_assert in the llvmutilscount section.\n");
    return 0;
}
