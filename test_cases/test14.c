
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    if(a > b) {
        printf("a is greater than b\n");
    } else if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a and b are equal\n");
    }

    switch(a) {
        case 1:
            printf("a is 1\n");
            break;
        case 2:
            printf("a is 2\n");
            break;
        case 3:
            printf("a is 3\n");
            break;
        default:
            printf("a is not 1, 2 or 3\n");
    }

    return 0;
}
