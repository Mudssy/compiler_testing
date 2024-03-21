
#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        if (i == 5) break;
        printf("%d\n", i);
    }

    switch (i) {
    case 5:
        printf("Break in loop executed");
        break;
    default:
        printf("Unexpected behavior");
        break;
    }

    return 0;
}
