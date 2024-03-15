
#include <stdio.h>

int main() {
    int x = 10;
    switch (x) {
        case 5:
            printf("x is equal to 5\n");
            break;
        case 10:
            printf("x is equal to 10\n");
            break;
        default:
            printf("x is not equal to 5 or 10\n");
    }
    return 0;
}
