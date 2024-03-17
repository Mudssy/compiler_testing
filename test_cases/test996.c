
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    if (a > b) {
        printf("Variable a is live\n");
    } else {
        printf("Variable b is live\n");
    }

    if (c > a) {
        printf("Variable c is live\n");
    } else {
        printf("Variable a is live\n");
    }

    return 0;
}
