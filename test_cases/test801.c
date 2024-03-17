
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void print_addition(int a, int b) {
    printf("The addition of %d and %d is %d.\n", a, b, add(a, b));
}

int main() {
    print_addition(5, 3);
    print_addition(10, 20);
    return 0;
}
