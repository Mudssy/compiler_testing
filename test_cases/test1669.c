
#include <stdio.h>

int main() {
    // For each of these types, print their size in bytes
    printf("Size of char: %zu\n", sizeof(char));
    printf("Size of short: %zu\n", sizeof(short));
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of long: %zu\n", sizeof(long));
    printf("Size of long long: %zu\n", sizeof(long long));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of long double: %zu\n", sizeof(long double));
    printf("Size of pointer: %zu\n", sizeof(void*));

    return 0; // All good, finished successfully
}
