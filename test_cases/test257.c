
#include <stdio.h>

int main() {
    int result;

    asm("mov $2, %0" : "=r"(result));

    printf("Result: %d\n", result);
    return 0;
}
