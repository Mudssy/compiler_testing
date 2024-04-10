
#include <stdio.h>
#import <objc/runtime.h>

typedef struct {
    char _myProperty[1024]; // assuming it's a string
} MyClass;

void setMyProperty(MyClass *self, const char* value) 
{
    strncpy(self->_myProperty, value, sizeof(self->_myProperty)-1);
    self->_myProperty[sizeof(self->_myProperty)-1] = '\0'; // for safety
}

const char* getMyProperty(MyClass *self) 
{
    return self->_myProperty;
}

int main() {
    MyClass obj;
    setMyProperty(&obj, "Hello, World!");
    printf("Value: %s\n", getMyProperty(&obj));

    return 0;
}
