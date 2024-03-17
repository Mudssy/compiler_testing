
#include <stdio.h>

void no_return_func(int x) __attribute__((noreturn));

void readonly_func(const int *x) {
    printf("Value of readonly variable: %d\n", *x);
}

int pure_func(int x, int y) {
    return x + y;
}

int main() {
    int a = 10;
    const int b = 20;
    int c = 30;

    no_return_func(a);
    
    readonly_func(&b);

    printf("Pure function result: %d\n", pure_func(a, c));

    return 0;
}

void no_return_func(int x) {
    printf("This is a noreturn function with value: %d\n", x);
    // This function will never return to the caller
    while (1) {}
}
