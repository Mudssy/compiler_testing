
#include <stdio.h>

typedef union {
    int i;
    float f;
} Number;

int main() {
    Number num1, num2;
    num1.i = 5;
    num2.f = 3.14;
    
    printf("num1 value: %d\n", num1.i);
    printf("num2 value: %f\n", num2.f);

    return 0;
}
