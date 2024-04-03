
#include <stdio.h>
int main() {
    int x = 5;
    printf("Initial value: %d\n", x);
    // Testing compound assignment +=
    x += 3;
    printf("After x += 3, x is: %d\n", x);
    // Testing compound assignment -=
    x -= 2;
    printf("After x -= 2, x is: %d\n", x);
    // Testing compound assignment *=
    x *= 4;
    printf("After x *= 4, x is: %d\n", x);
    // Testing compound assignment /=
    x /= 2;
    printf("After x /= 2, x is: %d\n", x);
    return 0;
}
