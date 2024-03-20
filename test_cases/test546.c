
#include <stdio.h>

int main() {
    int x = -1; // Change this to a positive number to see the output change

    __builtin_assume(x > 0);

    printf("The value of x is: %d\n", x);

    return 0;
}
