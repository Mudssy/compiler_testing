
#include <stdio.h>

int main() {
    int i = 5;
    float f = 3.14f;
    double d = 3.141592653589793;
    
    printf("Size of int: %lu\n", sizeof(i));
    printf("Size of float: %lu\n", sizeof(f));
    printf("Size of double: %lu\n", sizeof(d));

    i = 10;
    f = 2.71828f;
    d = 2.718281828459045;
    
    printf("Value of int after assignment: %d\n", i);
    printf("Value of float after assignment: %.6f\n", f);
    printf("Value of double after assignment: %.17f\n", d);

    return 0;
}
