
#include <stdio.h>

typedef void (*funcPtr)();

void foo() {
    printf("Foo\n");
}

void bar() {
    printf("Bar\n");
}

int main(void) {
    funcPtr fp;
    
    fp = &foo;
    fp(); // prints "Foo"
    
    fp = &bar;
    fp(); // prints "Bar"
    
    return 0;
}
