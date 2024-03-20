
#include <stdio.h>
#include <stdarg.h>  // for va_list, va_start, va_arg, va_end

int sum(int count, ...) { 
    int result = 0;
    va_list args;
    va_start(args, count);
    
    for (int i = 0; i < count; ++i) {
        result += va_arg(args, int);
    }
    va_end(args);
    
    return result;
}

double average(int count, ...) { 
    double result = 0.0;
    va_list args;
    va_start(args, count);
    
    for (int i = 0; i < count; ++i) {
        result += va_arg(args, int);
    }
    va_end(args);
    
    return result/count;
}

int main() {
    printf("Sum = %d\n", sum(5, 10, 20, 30, 40, 50));
    printf("Average = %.2f\n", average(5, 10, 20, 30, 40, 50));
    
    return 0;
}
