
#include <stdio.h>

int main() {
    int i = 5;
    printf("Initial value of i: %d\n", i);

    ++i;
    printf("After pre-increment, value of i: %d\n", i);

    i--;
    printf("After post-decrement, value of i: %d\n", i);

    --i;
    printf("After pre-decrement, value of i: %d\n", i);

    ++i;
    printf("After post-increment, value of i: %d\n", i);

    return 0;
}
