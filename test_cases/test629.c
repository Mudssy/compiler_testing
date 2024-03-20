
#include <stdio.h>

struct inner_structure {
    int a;
};

struct outer_structure {
    int b;
    struct inner_structure i;
};

int main() {
    struct inner_structure i = { 42 };
    struct outer_structure o = { 10, {20} };

    printf("Outer structure: b=%d\n", o.b);
    printf("Inner structure (through outer): a=%d\n", o.i.a);
    printf("Directly accessed inner structure: a=%d\n", i.a);
    
    return 0;
}
