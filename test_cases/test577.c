
#include <stdio.h>

int main() {
    int a = 5;
    float b = 10.2f;
    double c = 15.3;
    char d = 'A';
    printf("Size of int: %zu\n", sizeof(a));
    printf("Size of float: %zu\n", sizeof(b));
    printf("Size of double: %zu\n", sizeof(c));
    printf("Size of char: %zu\n", sizeof(d));
    return 0;
}
