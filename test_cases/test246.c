
#include <stdio.h>
#include <stdarg.h>

void print_numbers(int num, ...) {
    va_list args;
    va_start(args, num);
    
    for (int i = 0; i < num; ++i) {
        int value = va_arg(args, int);
        printf("%d: %d\n", i+1, value);
    }
    va_end(args);
}

int main() {
    print_numbers(3, 42, 7, 98);
    return 0;
}
