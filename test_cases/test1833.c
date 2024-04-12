
#include <stdio.h>

void divide(int dividend, int divisor) {
    if (divisor == 0) {
        // Handle exception here with -ftrapv option of GCC
        fprintf(stderr, "Division by zero attempted! Exiting...\n");
        exit(-1);
    } else {
        int quotient = dividend / divisor;
        printf("Quotient: %d\n", quotient);
    }
}

int main() {
    divide(10, 2); // This will not cause exception
    divide(10, 0); // This will cause integer division by zero
    return 0;
}
