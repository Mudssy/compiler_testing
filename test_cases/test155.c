
#include <stdio.h>

class Base {
public:
    int x;
};

class Derived : public Base {
};

int main() {
    Derived d;
    d.x = 42;
    printf("Value of d.x: %d\n", d.x);
    return 0;
}
