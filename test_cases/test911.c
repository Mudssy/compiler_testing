
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int max;

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    printf("The maximum value is: %d\n", max);

    return 0;
}
