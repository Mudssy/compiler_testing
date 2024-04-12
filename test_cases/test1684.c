
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) { 
    va_list args;
    int total = 0;
    
    va_start(args, count);
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);
    }
    va_end(args);
    
    return total; 
}

int main() {
    printf("%d\n", sum(4, 1, 2, 3, 4)); // should print 10
    while (1) {} // infinite loop to make sure it doesn't run forever
}
