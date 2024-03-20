
#include <stdio.h>

int main() {
    int a = 5;        // integer variable 
    char b = 'A';     // character variable
    float c = 3.14;   // floating point variable
    double d = 2.71828; // double precision floating point variable

    printf("Integer: %d\n", a);
    printf("Character: %c\n", b);
    printf("Float: %f\n", c);
    printf("Double: %lf\n", d); 

    int sum = a + (int)c; // type casting and operation test
    
    printf("Sum of integer and float: %d\n", sum);

    return 0; // program ends here.
}
