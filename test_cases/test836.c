
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, int count, ...) {
    va_list args;
    va_start(args, count);
    
    for (int i = 0; i < count; ++i) {
        printf("%d%s", va_arg(args, int), separator);
    }
    va_end(args);
}

int main() {
    print_numbers(" ", 3, 1, 2, 3);
    return 0;
}
