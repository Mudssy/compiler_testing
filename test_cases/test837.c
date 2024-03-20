
#include <stdarg.h>
#include <stdio.h>

void foo(int n, ...) {
    va_list argp;
    va_start(argp, n);
    
    for (int i = 0; i < n; ++i) {
        int x = va_arg(argp, int);
        printf("Argument %d: %d\n", i+1, x);
    }
    
    va_end(argp);
}

int main() {
    foo(5, 10, 20, 30, 40, 50);
    return 0;
}
