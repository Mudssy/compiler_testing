
#include <stdio.h>

int foo(void) {
    int a = 10;
    int b = 20;
    return a + b;
}

int main(void) {
    int result = foo();
    printf("The sum of 10 and 20 is: %d\n", result);
    return 0;
}
