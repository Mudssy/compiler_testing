
#include <stdio.h>

typedef struct {
    int field;
} MyClass;

void MyClass_setField(MyClass *self, int value) {
    self->field = value;
}

int MyClass_getField(MyClass *self) {
    return self->field;
}

int main() {
    MyClass myObject;
    MyClass_setField(&myObject, 42);
    
    printf("The value of field is: %d\n", MyClass_getField(&myObject));

    return 0;
}
