
#include <stdio.h>
#include <limits.h>

int main() {
    printf("Char min: %d, Char max: %d\n", CHAR_MIN, CHAR_MAX);
    printf("Short min: %d, Short max: %d\n", SHRT_MIN, SHRT_MAX);
    printf("Int min: %d, Int max: %d\n", INT_MIN, INT_MAX);
    printf("Long min: %ld, Long max: %ld\n", LONG_MIN, LONG_MAX);
    printf("Long long min: %lld, Long long max: %lld\n", LLONG_MIN, LLONG_MAX);
    return 0;
}
