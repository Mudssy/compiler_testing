
#include <stdio.h>

int main() {
    int result = 0;

    for (int i = 0; i < 10; i++) {
        result += i;
    }

    printf("Sum of numbers from 0 to 9: %d\n", result);

    return 0;
}
