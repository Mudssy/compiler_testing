
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    printf("Before: a=%d, b=%d\n", a, b);
    (a++, b++) && (c++);
    printf("After: a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}
