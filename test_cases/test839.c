
#include <stdarg.h>
#include <stdio.h>

void va_test(int num, ...) {
    va_list valist;
    va_start(valist, num);
    for (int i = 0; i < num; i++) {
        int value = va_arg(valist, int);
        printf("Value %d: %d\n", i+1, value);
    }
    va_end(valist); // This is what we're testing, if compiler supports it correctly.
}

int main() {
    va_test(3, 5, 10, 20);
    return 0;
}
