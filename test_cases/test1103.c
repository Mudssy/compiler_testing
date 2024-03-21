
#include <stdio.h>

int main() {
    int i;
    
    printf("Testing for loop:\n");
    for (i = 0; i < 5; ++i) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Testing while loop:\n");
    i = 0;
    while (i < 5) {
        printf("%d ", i);
        ++i;
    }
    printf("\n\n");

    printf("Testing do-while loop:\n");
    i = 0;
    do {
        printf("%d ", i);
        ++i;
    } while (i < 5);
    printf("\n");

    return 0;
}
