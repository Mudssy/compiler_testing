
#include <stdio.h>
#include <stdarg.h> // This library contains va_list, va_start, va_end etc.

void print_formatted(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

int main(void) {
    print_formatted("This is a test string: %s\n", "Hello, World!");
    return 0;
}

void print_formatted(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vfprintf(stdout, fmt, args);
    va_end(args);
}
