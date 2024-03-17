
#include <stdarg.h>
#include <stdio.h>

#define _Generic(x)         _Generic((x), \
        int: print_int,     \
       char: print_char,    \
    default: print_default  \
)

void print_int(va_list args) {
    int x = va_arg(args, int);
    printf("The integer is %d\n", x);
}

void print_char(va_list args) {
    char x = (char)va_arg(args, int);
    printf("The character is %c\n", x);
}

void print_default(va_list args) {
    printf("Unsupported type\n");
}

int main() {
    va_list args;
    
    _Generic(10)(args);
    _Generic('a')(args);
    _Generic(3.5f)(args);
    
    return 0;
}
