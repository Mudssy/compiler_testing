
#include <stdio.h>

void foo(int x) { printf("Foo called with %d\n", x); }

extern void _Z3fooifEv() __attribute__((weak, alias("_Z3foofi")));

extern void bar(int) __attribute__((alias("foo")));

int main() 
{
    int a = 10;
    foo(a); // Calls the original function.
    _Z3fooifEv(); // Calls the aliased function through name mangling.
    bar(a); // Also calls the original function.
}
