
#include <stdio.h>

int main() {
    int i;
    
    printf("Multiple of 5:\n");
    for(i = 1; i <= 20; ++i) {
        if (i % 5 != 0) continue; // If the number is not a multiple of 5, skip to next iteration
        printf("%d ", i);
    }
    
    printf("\nNon-multiple of 5:\n");
    for(i = 1; i <= 20; ++i) {
        if (i % 5 == 0) continue; // If the number is a multiple of 5, skip to next iteration
        printf("%d ", i);
    }
    
    return 0;
}
