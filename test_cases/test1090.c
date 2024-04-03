
#include <stdio.h>

void f() { printf("Hello, world!\n"); }

typedef void (*FuncPtr)(); // Define Function Pointer type

struct S {
    FuncPtr func; 
};

int main() {
    struct S s = {f}; 
    (s.func)(); 
}
