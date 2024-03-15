
#include <stdio.h>
#include <stdarg.h>

void print_values(const char* format, ...) {
    va_list args;
    va_start(args, format);

    for (int i = 0;; ++i) {
        int value = va_arg(args, int);
        if (value == -1) break;
        printf("Value %d: %d\n", i+1, value);
    }

    va_end(args);
}

int main() {
    print_values("%d %d %d", 42, 75, -1);
    return 0;
}
