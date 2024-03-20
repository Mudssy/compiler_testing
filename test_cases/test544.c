
#include <stdarg.h>
#include <stdio.h>

void print_ints(int num, ...) {
    va_list args;
    va_start(args, num);
    
    for (int i = 0; i < num; ++i) {
        int value = va_arg(args, int);
        printf("%d: %d\n", i, value);
    }
    
    va_end(args);
}

int main() {
    print_ints(3, 42, 17, 99);
    return 0;
}
