
#include <stdio.h>
#include <inttypes.h>

void __attribute__((noinline)) report(const char *message, int line) {
    printf("%s (line %d)\n", message, line);
}

int main() {
    void *address = __builtin_return_address(0);
    report("Return address is", __LINE__);
    printf("%p\n", address);
    return 0;
}
