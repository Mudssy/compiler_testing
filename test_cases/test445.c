
#include <stdio.h>

union U {
    int a;
    float b;
};

int main() {
    union U u1, u2;
    
    u1.a = 42;
    printf("u1: %d\n", u1.a);
    
    u2.b = 3.14f;
    printf("u2: %.2f\n", u2.b);
    
    return 0;
}
