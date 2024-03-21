
#include <stdio.h>

typedef union {
    int x;
    double y;
} my_union;

int main() {
    my_union u = { .y = 3.14 };
    
    printf("The size of the union is: %lu\n", sizeof(u));
    printf("The value stored in the union is: %f\n", u.y);
    printf("The address of x: %p\n", &u.x);
    printf("The address of y: %p\n", &u.y);
    
    return 0;
}
