
#include <stdio.h>
#include <stdarg.h>
#include <float.h>

double SumFloats(int count, ...) {
    va_list ap;
    double sum = 0.0;
    int i;
    
    va_start(ap, count); /* Initialize the argument list. */
    for(i = 0; i < count; i++){
        sum += va_arg(ap, double); /* Get the next argument value. */
    }
    va_end(ap);  /* Clean up. */
    return sum;
}

int main() {
    printf("%f\n", SumFloats(3, 1.1, 2.2, 3.3));
    printf("%f\n", SumFloats(5, -1.0, 2.6, 4.7, 8.9));
    return 0;
}
