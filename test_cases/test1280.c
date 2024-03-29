
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void PrintNumbers(int n_args, ...) {
    va_list valist;
    
    /* initialize valist for num number of arguments */
    va_start(valist, n_args);
  
    /* access all the arguments assigned to valist */
    for (int i = 0; i < n_args; i++) {
        int num = va_arg(valist, int);
        printf("%d ", num);
    }
    
    /* clean memory reserved for valist */
    va_end(valist);
}
  
int main() {
    PrintNumbers(3, 10, 20, 30);
    
    return EXIT_SUCCESS;
}
