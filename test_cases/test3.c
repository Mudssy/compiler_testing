
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Before swap: a=%d, b=%d\n", a, b);

    // Swapping a and b using third variable temp
    int temp = a;
    a = b;
    b = temp;

    printf("After swap: a=%d, b=%d\n", a, b);

    return 0;
}
