
#include <stdio.h>

class Base {
public:
    virtual void print() = 0;
};

class Derived : public Base {
public:
    void print() override {
        printf("Derived class\n");
    }
};

int main() {
    Derived d;
    Base &b = d;
    b.print();
    return 0;
}
