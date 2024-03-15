
#include <stdio.h>

typedef int Integer;
typedef float Float;
typedef double Double;

int main() {
    Integer x = 10;
    Float y = 3.14F;
    Double z = 2.71828;

    printf("Integer: %d\n", x);
    printf("Float: %f\n", y);
    printf("Double: %lf\n", z);
    
    return 0;
}
