
#include <stdio.h>

int main(void) {
    int i;
    printf("Iterating from 1 to 5:\n");
    
    // A standard 'for' loop, with incrementing step
    for (i = 1; i <= 5; ++i) {
        printf("%d\n", i);
    }
    
    printf("\nIterating from 5 to 1:\n");
    
    // A standard 'for' loop, with decrementing step
    for (i = 5; i >= 1; --i) {
        printf("%d\n", i);
    }
    
    return 0;
}
