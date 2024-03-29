
#include <stdio.h>
#include <stdarg.h>

void PrintMultipleArguments(int count, ...) {
    va_list list;
    va_start(list, count);
    
    for (int i = 0; i < count; ++i) {
        int num = va_arg(list, int);
        printf("Argument %d: %d\n", i + 1, num);
    }
    
    va_end(list);
}

int main() {
    PrintMultipleArguments(3, 42, 73, 99);
    return 0;
}
