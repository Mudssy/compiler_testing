
#include <stdio.h>

typedef struct Base {
    int a;
} Base;

typedef struct Derived {
    Base base;
    int b;
} Derived;

int main() {
    Derived d = {{{42}}};
    printf("The value of d.base.a is: %d\n", d.base.a);
    return 0;
}
