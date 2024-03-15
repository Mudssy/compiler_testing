
#include <stdio.h>

int main() {
    int i;
    
    // Testing while loop
    i = 0;
    printf("Testing while loop: ");
    while(i < 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Testing do-while loop
    i = 0;
    printf("Testing do-while loop: ");
    do {
        printf("%d ", i);
        i++;
    } while(i < 5);
    printf("\n");

    // Testing for loop
    printf("Testing for loop: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
