
#include <stdio.h>

typedef int MyInt;

int main() {
    MyInt a = 10;
    MyInt b = 20;
    MyInt c = a + b;

    printf("The sum of %d and %d is %d\n", a, b, c);

    return 0;
}
