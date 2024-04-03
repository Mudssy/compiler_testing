
#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("\n");
    
    printf("Alignment of char: %zu\n", _Alignof(char));
    printf("Alignment of int: %zu\n", _Alignof(int));
    printf("Alignment of float: %zu\n", _Alignof(float));
    printf("Alignment of double: %zu\n", _Alignof(double));
    
    return 0;
}
