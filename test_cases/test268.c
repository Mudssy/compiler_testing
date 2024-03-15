
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c;

    if (a > b) {
        c = a + b;
    } else {
        c = a - b;
    }

    printf("Value of c: %d\n", c);
    return 0;
}
