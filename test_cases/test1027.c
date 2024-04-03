
#include <stdio.h>

typedef struct MyClass {
    int PrivateVariable;
    void (*PublicMethod)();
    void (*PrivateMethod)();
} MyClass;

void PublicMethod() {
    printf("This is a public method.\n");
}

void PrivateMethod() {
    printf("This is a private method.\n");
}

MyClass init_MyClass() {
    MyClass mc = {.PublicMethod=&PublicMethod, .PrivateMethod=&PrivateMethod};
    return mc;
}

int main() {
    MyClass mc = init_MyClass();
    
    mc.PublicMethod();
    // Trying to access private method directly will give an error because C does not support private members
    // mc.PrivateMethod(); 

    return 0;
}
