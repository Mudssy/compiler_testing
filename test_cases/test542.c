
#include <stdio.h>
#include <stdarg.h>

int main(void) {
    int result = 0;
    
    va_list args;
    va_start(args, result);
        for (int i = 1; i <= 5; ++i) {
            int value = va_arg(args, int);
            printf("Value: %d\n", value);
        }
    va_end(args);
    
    return 0;
}
