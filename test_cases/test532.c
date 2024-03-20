
#include <stdio.h>

#define my_abs(x) _Generic((x), \
    int: abs, \
    default: x)(x)
    
int main() {
    printf("%s\n", _Generic(my_abs(-3), int: "int", default: "non-int"));
    return 0;
}
