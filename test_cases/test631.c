
#include <stdio.h>

union TestUnion {
    int i;
    float f;
};

int main() {
    union TestUnion u;

    u.i = 10;
    printf("u.i: %d\n", u.i);

    u.f = 220.0 / 11.0;
    printf("u.f: %.2f\n", u.f);

    return 0;
}
