
#include <stdarg.h>
#include <stdio.h>

int add_nums(int count,...) {
    int result = 0;
    va_list ap;
    va_start(ap, count); // Requires the last fixed parameter (to get the address)
    for (int j=0;j<count;++j){
        result += va_arg(ap, int); //Requires the type to cast to. Increments ap to the next argument.
    } 
    va_end(ap); //Clean up the list
    return result;
}

int main() {
   printf("Sum = %d\n", add_nums(4, 25, 25, 50, 100));
   return 0;
}
