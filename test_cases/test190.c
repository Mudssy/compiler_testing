
#include <stdio.h>

struct S {
    int i;
    double d;
};

int main() {
    struct S s = {1, 2.0};

    auto [i, d] = s;
    
    printf("i: %d\n", i);
    printf("d: %f\n", d);
}
