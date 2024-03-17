
#include <stdio.h>

int main(void) {
    int x = 10;
    printf("Variable 'x' is located at memory location %p\n", (void*)&x);
    return 0;
}
