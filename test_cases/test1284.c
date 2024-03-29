
#include <stdarg.h>
#include <stdio.h>

int add(int count, ...) {
    va_list ap;
    int i, sum = 0;

    va_start(ap, count); /* Initialize the argument list. */
    for(i = 0; i < count; i++)
        sum += va_arg(ap, int); /* Get the next argument value. */
    va_end(ap); /* Clean up. */

    return sum;
}

int add_using_va_copy(int count, ...) {
    va_list ap, copy;
    int i, sum = 0;

    va_start(ap, count); /* Initialize the argument list. */
    va_copy(copy, ap); /* Make a copy of the argument list. */

    for(i = 0; i < count/2; i++)
        sum += va_arg(ap, int); /* Get half the arguments. */

    for(i = count/2; i < count; i++)
        sum += va_arg(copy, int); /* Get the remaining arguments. */

    va_end(ap); /* Clean up. */
    va_end(copy); /* Clean up. */

    return sum;
}
