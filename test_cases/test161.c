
#include <stdio.h>

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}
};

MyClass operator+(const MyClass& a, const MyClass& b) {
    return MyClass(a.x + b.x);
}

int main() {
    MyClass obj1(3);
    MyClass obj2(5);
    MyClass result = obj1 + obj2;
    printf("Result: %d\n", result.x);
    return 0;
}
