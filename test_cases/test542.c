
#include <stdarg.h>
#include <stdio.h>

void checkVaEnd(int count, ...) {
    va_list arg;
    int i = 0;
    
    va_start(arg, count);
    
    for (; i < count; ++i) {
        printf("%d ", va_arg(arg, int));
    }
    
    if(__builtin_va_end(arg)) {
        printf("\nVa End operation was successful\n");
    } else {
        printf("\nVa End operation failed\n");
    }
}

int main() {
    checkVaEnd(3, 10, 20, 30);
    
    return 0;
}
