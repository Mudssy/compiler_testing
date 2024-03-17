
#include <stdio.h>
#include <stdarg.h>

void print_integers(int count, ...) {
    va_list ap;
    int i;

    va_start(ap, count);
    for (i = 0; i < count; i++) {
        printf("%d ", va_arg(ap, int));
    }
    va_end(ap);
}

int main() {
    print_integers(5, 1, 2, 3, 4, 5);
    return 0;
}
