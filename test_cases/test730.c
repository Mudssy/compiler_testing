
#include <stdio.h>

static void print_inline(const char *str) __attribute__((always_inline));

int main() {
    print_inline("Hello, World!");
    return 0;
}

void print_inline(const char *str) {
    printf("%s\n", str);
}
