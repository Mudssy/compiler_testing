
#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("b is greater than or equal to a\n");
    }

    if (b > c) {
        printf("b is greater than c\n");
    } else {
        printf("c is greater than or equal to b\n");
    }

    return 0;
}
