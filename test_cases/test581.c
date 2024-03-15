
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    
    if (a > b) {
        printf("a is greater than b\n");
    } else if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a and b are equal\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("i: %d\n", i);
    }

    int j;
    while ((j = getchar()) != '\n' && j != EOF) {
        putchar(j);
    }

    do {
        printf("This message will only be printed once.\n");
        break;
    } while (1);
    
    return 0;
}
