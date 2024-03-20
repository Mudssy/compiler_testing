
#include <stdio.h>

static inline int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    printf("Result is : %d", add(5, 3));
    return 0;
}
