
#include <stdio.h>

int main(void) {
    __attribute__((format_arg(1)))
    void print_formatted(const char *fmt, ...);

    print_formatted("This is a test string: %s\n", "Hello, World!");
    return 0;
}

void print_formatted(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vfprintf(stdout, fmt, args);
    va_end(args);
}
