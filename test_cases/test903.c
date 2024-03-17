
#include <stdio.h>

int main() {
    int a = 5;
    int b[10];

    for (int i = 0; i < 10; i++) {
        b[i] = a * (i + 1);
    }

    for (int i = 0; i < 10; i++) {
        printf("b[%d]: %d\n", i, b[i]);
    }

    return 0;
}
