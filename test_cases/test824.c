
#include <stdio.h>

void foo(int x); // function prototype outside of main function

int main() {
    int a = 5;
    printf("Inside main, before calling foo: %d\n", a);
    foo(a);
    printf("Inside main, after calling foo: %d\n", a);  // should print the same value as before function call
    return 0;
}

void foo(int x) {
    printf("Inside foo, starting with: %d\n", x);
    ++x;
    printf("Inside foo, after incrementing: %d\n", x);  // should print one more than the input value
}
