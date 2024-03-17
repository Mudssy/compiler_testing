
#include <stdio.h>

int main(void) {
    volatile int i = 10;
    int *ptr = &i;  // Create a pointer to 'volatile' variable

    printf("Initial value of i: %d\n", i);

    *ptr = 20;  // Try to modify the value through its pointer

    printf("Modified value of i: %d\n", i);

    return 0;
}
