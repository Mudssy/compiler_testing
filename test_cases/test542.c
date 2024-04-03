
#include <stdio.h>
#include <stdarg.h>

void checkVaEnd(int count, ...) {
    va_list arg;
    int i = 0;
    
    va_start(arg, count);
    for (; i < count; ++i) {
        printf("%d\n", va_arg(arg, int));
    }
    va_end(arg);  // This is the only correct way to end traversal of a `va_list`.
}

int main() {
    checkVaEnd(3, 10, 20, 30);
    return 0;
}
