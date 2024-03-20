
#include <stdio.h>

void foo(int x) { printf("Foo called with %d\n", x); }

extern void __Z3barifECv() __asm__ ("_Z3barifECv");  // Mangle the function name as if it was compiled by clang.

int main() {
    foo(10);
    __Z3barifECv();
    return 0;
}
