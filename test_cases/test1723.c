
#include <stdio.h>

void foo(int *restrict ptr1, int *restrict ptr2) {
    *ptr1 = 5;
    *ptr2 = 10;
}

int main() {
    int x, y;
    foo(&x, &y);
    
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
