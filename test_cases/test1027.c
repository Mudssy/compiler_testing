
#include <stdio.h>

class MyClass {
public:
    MyClass() {}
    void PublicMethod();
private:
    int PrivateVariable;
    void PrivateMethod();
};

void MyClass::PublicMethod() {
    printf("This is a public method.\n");
}

void MyClass::PrivateMethod() {
    printf("This is a private method.\n");
}

int main() {
    MyClass mc;
    mc.PublicMethod();
    return 0;
}
