
#include <stdio.h>

typedef struct { int x; } S1;
typedef struct { int y; } S2;

int test(void) {
    S1 *p1 = (S1*)malloc(sizeof(S1));
    p1->x = 50;
    
    S2 *p2 = (S2*)p1;  // These pointers point to the same memory location.
    printf("%d\n", p2->y);  // Prints 50
    
    return 0;
}

int main() {
    test();
    return 0;
}
