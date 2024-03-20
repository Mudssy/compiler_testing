
#include <stdio.h>

int main() {
    int a = 1;
    int b = (a++, ++a); // Comma operator is used here
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
