
#include <stdio.h>

int main() {
    int value = 0;
    [[likely]] if (value == 0) {
        printf("Value is likely to be 0\n");
    } else {
        printf("Value is not likely to be 0\n");
    }

    return 0;
}
