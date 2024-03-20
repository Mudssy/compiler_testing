
#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...) {
    int result = 0;
    va_list ap;
    va_start(ap, count);
    
    for (int i = 0; i < count; ++i) {
        result += va_arg(ap, int);
    }
    va_end(ap);
    
    return result;
}

int main() {
    printf("%d\n", sum(5, 1, 2, 3, 4, 5));
    return 0;
}
