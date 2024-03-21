
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void modify_values(int *a, int *b) {
    *a = (*a) * 10;
    *b = (*b) * 20;
}

int main() {
    int x = 5, y = 3;
    
    printf("Before modification: x=%d, y=%d\n", x, y);
    modify_values(&x, &y);
    printf("After modification: x=%d, y=%d\n", x, y);
    printf("Sum of x and y is %d\n", add(x, y));
    
    return 0;
}
