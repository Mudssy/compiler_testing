
#include <stdio.h>

class A {
public:
    int x;
private:
    int y;
};

class B {
public:
    friend void showXY(A &a); // Friend declaration
};

void showXY(A &a) {
    printf("x: %d, y: %d\n", a.x, a.y);
}

int main() {
    A obj;
    obj.x = 10;
    obj.y = 20;
    
    showXY(obj);

    return 0;
}
