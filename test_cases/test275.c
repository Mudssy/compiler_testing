
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping variables using debugger watchpoints
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
