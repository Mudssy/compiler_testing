
#include <stdio.h>

typedef struct {
    int foo;
    char bar[10];
} MyStruct;

int main() {
    MyStruct s = { .foo = 42, .bar = "Hello" };
    
    printf("MyStruct.foo: %d\n", s.foo);
    printf("MyStruct.bar: %s\n", s.bar);
    
    return 0;
}
