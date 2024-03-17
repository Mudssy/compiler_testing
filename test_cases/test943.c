
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 5;
    
    if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a is not less than b\n");
    }

    if (b > c) {
        printf("b is greater than c\n");
    } else {
        printf("b is not greater than c\n");
    }

    if (c <= a) {
        printf("c is less than or equal to a\n");
    } else {
        printf("c is not less than or equal to a\n");
    }

    if (a >= b) {
        printf("a is greater than or equal to b\n");
    } else {
        printf("a is not greater than or equal to b\n");
    }
    
    return 0;
}
