
#include <stdio.h>
#include <stdarg.h>

void print_variadic(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int main() {
    print_variadic("This is a test with %d arguments\n", 1);
    return 0;
}
