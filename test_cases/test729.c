
#include <stdio.h>

int noreturn __attribute__((noreturn)) func() {
    printf("Function with noreturn attribute called\n");
}

int const_func() __attribute__((const)) {
    printf("Const function called\n");
    return 10;
}

int main(void) {
    // This will cause a compile-time error if the noreturn attribute is not handled correctly.
    func();
    
    // This also will cause a compile-time error if the const attribute is not handled correctly.
    int result = const_func();
    printf("Result: %d\n", result);
}
