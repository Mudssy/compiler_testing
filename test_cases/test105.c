
#include <stdio.h>

int add(const int *restrict p1, const int *restrict p2) {
    return *p1 + *p2; 
}

int main() {
    int a = 5;
    int b = 6;
    printf("The sum of %d and %d is %d\n", a, b, add(&a, &b));
    return 0;
}
