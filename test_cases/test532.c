
#include <stdio.h>

int main() {
    _Bool bool_val = 0;
    char char_val = 'A';
    short short_val = 12345;
    int int_val = 1234567890;
    long long_val = 1234567890123456789L;
    float float_val = 3.14f;
    double double_val = 3.14159265358979323846;
    long double long_double_val = 3.1415926535897932384626433832795L;

    printf("_Bool: %zu\n", sizeof(bool_val));
    printf("char: %zu\n", sizeof(char_val));
    printf("short: %zu\n", sizeof(short_val));
    printf("int: %zu\n", sizeof(int_val));
    printf("long: %zu\n", sizeof(long_val));
    printf("float: %zu\n", sizeof(float_val));
    printf("double: %zu\n", sizeof(double_val));
    printf("long double: %zu\n", sizeof(long_double_val));
    
    Here is a simple program which will print the size of different data types in C. You can use this code to test your compilers. This program uses the `sizeof` operator, which yields the size (in bytes) of its operand. The `%zu` format specifier is used to correctly print the result of `sizeof`, which has type `size_t`.
    
    