
#include <stdarg.h>
#include <stdio.h>

void print_ints(int n, ...) {
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; ++i) {
        int value = va_arg(args, int);
        printf("%d: %d\n", i, value);
    }
    
    va_end(args);
}

int main() {
    print_ints(3, 50, 100, -10);
    return 0;
}
