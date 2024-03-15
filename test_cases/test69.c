
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("Before assignment, value of a: %d\n", a);
    printf("Before assignment, value of b: %d\n", b);

    a = b + 5; // Testing the assignment operation using the result of an expression
    printf("After assignment, value of a: %d\n", a);

    return 0;
}
