
#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int a = 5;
    int b = 10;
    printf("ADD(%d, %d): %d\n", a, b, ADD(a, b));
    printf("MAX(%d, %d): %d\n", a, b, MAX(a, b));
    return 0;
}
