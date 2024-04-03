
#include <stdio.h>

int main() {
    int i;

    printf("Testing goto statement:\n");
    for(i = 0; i < 10; i++) {
        if(i == 5) {
            goto endloop;
        }
        printf("%d ", i);
    }
endloop: 
    printf("\nLoop ended at %d\n", i);

    printf("Testing continue statement:\n");
    for(i = 0; i < 10; i++) {
        if(i == 5) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\nTesting break statement:\n");
    for(i = 0; i < 10; i++) {
        if(i == 5) {
            break;
        }
        printf("%d ", i);
    }

    printf("\nTesting return statement:\n");
    for(i = 0; i < 10; i++) {
        if(i == 5) {
            return 0;
        }
        printf("%d ", i);
    }
}
