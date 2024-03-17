
#include <stdio.h>

int main() {
    int a = 10;
    two: a++;
    printf("Value of a after label two: %d\n", a);

    one: a--;
    printf("Value of a after label one: %d\n", a);

    return 0;
}
