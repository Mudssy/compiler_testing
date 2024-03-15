
#include <stdio.h>

int add(int a, int b) __attribute__((regparm(3)));

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);
    printf("The sum of 10 and 20 is: %d\n", result);
    return 0;
}
