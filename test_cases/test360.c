
#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    double d;

    printf("Size of int = %lu bytes\n", sizeof(i));
    printf("Size of char = %lu byte\n", sizeof(c));
    printf("Size of float = %lu bytes\n", sizeof(f));
    printf("Size of double = %lu bytes\n", sizeof(d));
    
    return 0;
}
