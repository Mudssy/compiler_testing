
#include <stdio.h>

int main(void) {
    volatile int x = 10;  // Declare a variable as volatile, to test if the "volatile" keyword is available
    printf("Value of x: %d\n", x);
    return 0;
}
