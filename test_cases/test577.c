
#include<stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;
    
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu byte\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));
    
    return 0;
}
