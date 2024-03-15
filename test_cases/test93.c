
#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
    printf("Address of x: %p\n", (void*) &x);
    printf("Value of p: %p\n", (void*) p);
    return 0;
}
