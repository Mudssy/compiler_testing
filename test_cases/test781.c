
#include <stdio.h>
#include <stddef.h>

union TestUnion {
    int i;
    float f;
};

int main() {
    union TestUnion u1, u2;
    
    u1.i = 42069;
    printf("u1.i: %d\n", u1.i);
    printf("u1.f: %f\n\n", u1.f);
    
    u2.f = 420.69;
    printf("u2.i: %d\n", u2.i);
    printf("u2.f: %f\n", u2.f);

    return 0;
}
