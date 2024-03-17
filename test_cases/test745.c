
#include <stdio.h>

int func(int a) __attribute__((pure));

int func(int a) {
    return a * 2;
}

int main() {
    int input = 10;
    printf("The result of func(%d) is: %d\n", input, func(input));
    return 0;
}
