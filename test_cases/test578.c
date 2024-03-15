
#include <stdio.h>

typedef struct {
    int x;
    float y;
} TestStruct;

int main() {
    int a = 10;
    int *ptr_a = &a;
    
    TestStruct t;
    t.x = 5;
    t.y = 7.2;
    TestStruct *ptr_t = &t;
    
    printf("Value of a: %d\n", *ptr_a);
    printf("Address of a: %p\n", ptr_a);
    
    printf("Value of t.x: %d\n", (*ptr_t).x);
    printf("Value of t.y: %.2f\n", (*ptr_t).y);
    printf("Address of t: %p\n", ptr_t);
    
    return 0;
}
