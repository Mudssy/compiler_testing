
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Before assignment: a = %d, b = %d\n", a, b);

    a += b; // Testing the '+=' operator
    b -= a; // Testing the '-=' operator
    a *= 2; // Testing the '*=' operator
    b /= 2; // Testing the '/=' operator
    a %= 3; // Testing the '%%=' operator

    printf("After assignment: a = %d, b = %d\n", a, b);

    return 0;
}
