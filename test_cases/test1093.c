
#include <stdio.h>

int main() {
    int a = 5;
    char b = 'A';
    float c = 3.14f;
    double d = 3.14159265358979323846;
    
    printf("int: %d\n", a);
    printf("char: %c\n", b);
    printf("float: %.2f\n", c);
    printf("double: %.15lf\n", d);
    
    return 0;
}
