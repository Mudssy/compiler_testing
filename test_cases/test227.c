
#include <stdio.h>

#define PRINT_MACRO(x) printf("The value of macro " #x " is %d\n", x);

int main() {
    int a = 10, b = 20;
    PRINT_MACRO(a)
    PRINT_MACRO(b)
    return 0;
}
