
#include <stdio.h>

// Swift name annotation
extern void swift_func(int *p) __attribute__((swift_name("SwiftFunc")));

extern int swift_var __attribute__((swift_name("SwiftVar"))) = 42;

void func() {
    printf("%s\n", __func__);
}

int main() {
    // Test Swift name annotation on a function
    swift_func(&swift_var);
    
    // Check if the variable and function are recognized by the compiler
    func();
    
    return 0;
}
