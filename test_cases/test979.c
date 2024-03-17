
#include <stdio.h>

int foo() {
    int a = 10;
    int b = 20;
    return a + b;
}

int main() {
    int result = foo();
    printf("The sum is: %d\n", result);
    return 0;
}
