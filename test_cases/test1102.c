
#include <stdio.h>

int main() {
    int a = 10;
    char b = 'A';

    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is not greater than 5\n");
    }

    switch (b) {
        case 'A':
            printf("b is A\n");
            break;
        case 'B':
            printf("b is B\n");
            break;
        default:
            printf("b is not A or B\n");
            break;
    }

    return 0;
}
