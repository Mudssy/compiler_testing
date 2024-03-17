
#include <stdio.h>

int main() {
    printf("Size and alignment of char: %lu, %lu\n", sizeof(char), _Alignof(char));
    printf("Size and alignment of int: %lu, %lu\n", sizeof(int), _Alignof(int));
    printf("Size and alignment of long: %lu, %lu\n", sizeof(long), _Alignof(long));
    printf("Size and alignment of double: %lu, %lu\n", sizeof(double), _Alignof(double));
    return 0;
}
