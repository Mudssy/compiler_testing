
#include <stdio.h>
#include <stdarg.h>

void print_values(const char *format, ...) {
    va_list args;
    va_copy(args, args);

    printf("First pass: ");
    vprintf(format, args);
    printf("\n");

    va_end(args);
    va_copy(args, args);

    printf("Second pass: ");
    vprintf(format, args);
    printf("\n");

    va_end(args);
}

int main() {
    print_values("%d %f %s\n", 42, 3.14, "Hello, World!");
    return 0;
}
