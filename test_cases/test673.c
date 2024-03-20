
#include <stdio.h>

typedef void (*func_ptr)(void);

static inline void foo() {
    printf("Hello from foo\n");
}

int main(int argc, char **argv) {
    func_ptr ptr = (func_ptr)foo;
    ptr();
    return 0;
}
