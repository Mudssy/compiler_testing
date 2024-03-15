
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int result;

    // Labels feature usage
    start:
    result = a + b;
    printf("The result is %d\n", result);

    if (result < 30) {
        a *= 2;
        b *= 2;
        goto start;
    }

    return 0;
}
