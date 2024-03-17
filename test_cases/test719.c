
#include <stdio.h>

int foo(int a);

int main() {
    int x = 5;
    printf("Original value of x: %d\n", x);
    foo(x);
    printf("After calling foo, x is now: %d\n", x);
    return 0;
}

int foo(int a) {
    // Alias symbol handling in interface stubs feature for the C programming language
    int *p = &a;
    (*p)++;
    return a;
}
