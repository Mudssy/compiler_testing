
#include <stdio.h>

typedef struct {
    int a;
} MyStruct;

int main() {
    typedef int MyInt;
    MyInt x = 10;
    printf("Value of x: %d\n", x);

    MyStruct y;
    y.a = 20;
    printf("Value of y.a: %d\n", y.a);

    return 0;
}
