
#include <stdio.h>

void print_generic(int x) {
    printf("int: %d\n", x);
}

void print_generic(float x) {
    printf("float: %f\n", x);
}

void print_generic(char *x) {
    printf("string: %s\n", x);
}

int main() {
    int intVar = 10;
    float floatVar = 3.14;
    char *strVar = "Hello, world!";

    _Generic(intVar,
            int: print_generic,
            default: printf)("This is an integer\n");
    
    _Generic(floatVar,
            float: print_generic,
            default: printf)("This is a floating-point number\n");
            
    _Generic(strVar,
            char *: print_generic,
            default: printf)("This is a string\n");

    return 0;
}
