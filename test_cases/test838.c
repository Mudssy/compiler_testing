
#include <stdio.h>
#include <stdarg.h>

int addNumbers(int count, ...) {
    int result = 0;
    va_list args;

    va_start(args, count);
    
    for (int i = 0; i < count; ++i) {
        result += va_arg(args, int);
    }
    
    va_end(args);

    return result;
}

int main() {
   printf("Sum is: %d\n", addNumbers(4, 25, 20, 15, 30)); // prints "Sum is: 90"
   printf("Sum is: %d\n", addNumbers(6, 1, 2, 3, 4, 5, 6)); // prints "Sum is: 21"
   return 0;
}
