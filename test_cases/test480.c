
#include <stdio.h>

int main() {
    int a = 10;
    __attribute__((annotate("This is an attribute"))) int b = 20;

    printf("Value of variable 'a': %d\n", a);
    printf("Value of variable 'b' with Artificial Attribute: %d\n", b);

    return 0;
}
