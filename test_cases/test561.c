
#include <stdio.h>
#include <limits.h>

int main() {
    printf("Size of char: %zu\n", sizeof(char));
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of long: %zu\n", sizeof(long));
    printf("Size of long long: %zu\n", sizeof(long long));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of long double: %zu\n", sizeof(long double));
    printf("Size of intmax_t: %zu\n", sizeof(intmax_t));
    printf("Size of uintmax_t: %zu\n", sizeof(uintmax_t));
    return 0;
}
