
#include <stdio.h>

void foo(int * __restrict ptr1, int * restrict ptr2) {
    printf("Before: %d\n", *ptr1);
    *ptr1 = 5;  // This is allowed because it's not aliased by `ptr2`.
    printf("After : %d\n", *ptr1);
}

int main(void) {
    int x = 3, y = 4;
    foo(&x, &y);   // Call function with two separate objects.
    return 0;
}
