
#include <stdarg.h>

int sum_half(int count, ...) {
    int sum = 0;
    va_list ap, copy;
    int i;
    
    va_start(ap, count);
    va_copy(copy, ap);

    // To handle the case of odd number of arguments.
    if (count % 2 != 0) {
        sum += va_arg(ap, int);
        --count;
    }

    for(i = 0; i < count / 2; ++i){
        int first = va_arg(ap, int);
        int second = va_arg(copy, int);
        
        // To handle the case of passing a float value when int is expected.
        sum += (int)(first * 0.5 + second * 0.5);
    }
    
    va_end(ap);
    va_end(copy);
    
    return sum;
}
