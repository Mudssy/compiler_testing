
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    const int c = a + b;
    printf("The value of constant expression 'a + b' is: %d\n", c);
    return 0;
}
