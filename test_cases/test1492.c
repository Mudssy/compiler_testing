
#include <stdio.h>

int main(void) {
    int i = 5;
    
    printf("Before prefix increment: %d\n", i);
    printf("After prefix increment: %d\n", ++i);
    printf("After postfix increment: %d\n", i++);
    printf("After second postfix increment: %d\n", i);
    
    printf("\n");
    
    int j = 5;

    printf("Before prefix decrement: %d\n", j);
    printf("After prefix decrement: %d\n", --j);
    printf("After postfix decrement: %d\n", j--);
    printf("After second postfix decrement: %d\n", j);
    
    return 0;
}
