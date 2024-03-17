
#include <stdio.h>

int main() {
    int i;
    printf("Testing while loop:\n");
    i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    printf("Testing do-while loop:\n");
    i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    printf("Testing for loop:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
