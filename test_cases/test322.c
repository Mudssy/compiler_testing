
#include <stdio.h>

typedef struct {
    int x;
} MyClass;

void MyClass_setX(MyClass* this, int value) {
    this->x = value;
}

int MyClass_getX(const MyClass* this) {
    return this->x;
}

int main() {
    MyClass myObject = { .x = 10 };
    
    printf("Initial Value: %d\n", MyClass_getX(&myObject));
    
    MyClass_setX(&myObject, 20);
    printf("After set Value: %d\n", MyClass_getX(&myObject));
    
    return 0;
}
