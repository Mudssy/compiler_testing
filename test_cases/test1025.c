
#include <stdio.h>

int main() {
    int result = 0;

    if (1) {
        result += 3;
    } else {
        result -= 2;
    }

    printf("Result: %d\n", result);

    return 0;
}
