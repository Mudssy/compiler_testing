
#include <stdio.h>

int stub_function(const int *x) __attribute__((const));

int stub_function(const int *x) {
    return *x;
}

int main() {
    const int a = 10;
    printf("Result: %d\n", stub_function(&a));
    return 0;
}
