
#include <stdio.h>

struct foo {
    int a;
    double b;
};

int main() {
    struct foo x = { .b = 10.5, .a = 2 };
    printf("Address of structure: %p\n", (void*)&x);
    printf("Size of structure: %zu\n", sizeof(struct foo));
    printf("Alignment requirement of 'int': %zu\n", _Alignof(int));
    printf("Alignment requirement of 'double': %zu\n", _Alignof(double));
    return 0;
}
