
#include <stdio.h>

typedef struct {
    int x;
} MyClass;

int getX(MyClass *instance) {
    return instance->x;
}

void setX(MyClass *instance, int newVal) {
    instance->x = newVal;
}

int main() {
    MyClass myInstance;
    setX(&myInstance, 10);
    
    printf("The value of x is: %d\n", getX(&myInstance));
    
    return 0;
}
