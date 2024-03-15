
#include <stdio.h>
#include <stdarg.h>

void printArgs(int count, ...) {
    va_list list;
    int i;
    
    va_start(list, count);
    
    for (i = 0; i < count; ++i) {
        printf("%d ", va_arg(list, int));
    }
    
    va_end(list);
}

int main() {
    printArgs(5, 123, 456, 789, 321, 987);
    return 0;
}
