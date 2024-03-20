
#include <stdarg.h>
#include <stdio.h>

void print_integers(int num, ...) {
    va_list valist;

    /* initialize valist for num number of arguments */
    __builtin_va_start(valist, num);

    /* access all the arguments assigned to valist */
    for (int i = 0; i < num; i++) {
       int value = __builtin_va_arg(valist, int);
       printf("Argument %d: %d\n", i + 1, value);
    }
    
    /* clean memory reserved for valist */
    __builtin_va_end(valist);
}

int main() {
   print_integers(3, 10, 20, 30);
   return 0;
}
