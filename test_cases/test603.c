
#include <stdio.h>
#include <stdarg.h>

void print_integers(int count, ...) {
    va_list list;
    va_start(list, count);

    for (int i = 0; i < count; ++i) {
        int num = va_arg(list, int);
        printf("%d ", num);
    }

    va_end(list);
}

int main() {
    print_integers(5, 1, 2, 3, 4, 5);
    return 0;
}
