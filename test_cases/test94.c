
#include <stdio.h>

int main() {
    int a;
    printf("Size of integer: %zu\n", sizeof(a));
    
    char b;
    printf("Size of character: %zu\n", sizeof(b));
    
    float c;
    printf("Size of float: %zu\n", sizeof(c));
    
    double d;
    printf("Size of double: %zu\n", sizeof(d));
    
    short e;
    printf("Size of short integer: %zu\n", sizeof(e));
    
    long f;
    printf("Size of long integer: %zu\n", sizeof(f));
    
    return 0;
}
