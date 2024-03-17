
#include <stdio.h>

int main() {
    _Bool boolVar = 0;
    int intVar = 5;
    float floatVar = 3.14f;
    double doubleVar = 3.14159265358979323846;
    char charVar = 'A';
    short shortVar = 500;
    long longVar = 1234567890;
    long long longLongVar = 1234567890123456789LL;

    printf("_Bool: %d\n", boolVar);
    printf("int: %d\n", intVar);
    printf("float: %.2f\n", floatVar);
    printf("double: %.15lf\n", doubleVar);
    printf("char: %c\n", charVar);
    printf("short: %hd\n", shortVar);
    printf("long: %ld\n", longVar);
    printf("long long: %lld\n", longLongVar);

    return 0;
}
