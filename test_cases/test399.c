
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    int sum = 0;
    va_list list;
    va_start(list, count);
    
    for (int i = 0; i < count; ++i) {
        sum += va_arg(list, int);
    }
    
    va_end(list);
    return sum;
}

int main() {
    printf("Sum of 1, 2 and 3 is: %d\n", sum(3, 1, 2, 3));
    return 0;
}
